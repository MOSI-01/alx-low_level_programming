#include <unistd.h>
#include <stdlib.h>

int main(void)
{
const char mess[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = sizeof(mess) - 1;

if (write(STDERR_FILENO, mess, len) != len)
{
return (1);
{
return (1);
}
