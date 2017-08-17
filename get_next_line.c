#include		"get_next_line.h"

char			*get_next_line(const int fd)
{
  static char		buf[READ_SIZE];
  static char		*lin = NULL;
  static int		end = 1;
  static int		c_buf = 0;
  static int		c_lin = 0;
  static int		len = 0;

  if (buf[c_buf] == '\0')
    {
      if ((len = read(fd, buf, READ_SIZE)) <= 0)
	return (lin = (((len == -1) || (c_buf != 0 && buf[c_buf - 1] == '\n')
			|| !(buf[c_buf] == '\0' && end--)) ? (NULL) : (lin)));
      buf[len] = ((c_buf = 0) ? ('\0') : (0));
    }
  if ((lin = ((c_lin == 0) ? (malloc((READ_SIZE + 1)))
	      : (realloc(lin, (READ_SIZE + c_lin + 1))))) == NULL)
    return (NULL);
  while (buf[c_buf] && buf[c_buf] != '\n')
    lin[c_lin++] = buf[c_buf++];
  lin[c_lin] = '\0';
  if (buf[c_buf] == '\n')
    return (((c_lin = (++c_buf * 0))) ? (NULL) : (lin));
  return (get_next_line(fd));
}
