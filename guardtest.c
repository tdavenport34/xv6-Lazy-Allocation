


int recursiveBreak() { //cause stack overflow by continuing to call iteslf
    recursiveBreak();
    return 0;
}

int main(int argc, char *argv[]) {
    recursiveBreak();
}

