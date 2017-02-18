make -s -C sub/libft

gcc -o gnl -Wall -Wextra -Werror -I sub/libft/includes -I sub sub/get_next_line.c sub/libft/libft.a \
tests/speed_test.c

./gnl big.txt