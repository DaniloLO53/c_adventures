#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork falhou");
        exit(1);
    }

    if (pid == 0) {
        printf("[FILHO] Vou trabalhar e terminar com sucesso.\n");
        exit(42);
    }

    int statloc;

    printf("[PAI] Estou esperando meu filho (PID: %d) terminar.\n", pid);
    waitpid(pid, &statloc, 0);
    printf("[PAI] Meu filho terminou. Vou verificar como.\n");

    if (WIFEXITED(statloc)) {
        int exit_status = WEXITSTATUS(statloc);
        printf("[PAI] O filho terminou normalmente com o código de saída: %d\n", exit_status);
    } else if (WIFSIGNALED(statloc)) {
        // O filho foi morto por um sinal?
        int signal_num = WTERMSIG(statloc);
        printf("[PAI] O filho foi morto pelo sinal número: %d\n", signal_num);
    }

    return 0;
}
