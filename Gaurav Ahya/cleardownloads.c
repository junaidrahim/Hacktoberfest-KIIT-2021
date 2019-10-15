#include <stdlib.h>

int main(){
    system("mv *.tar.gz compressed_packages/");
    system("mv *.tar.xz compressed_packages/");
    system("mv *.zip compressed_packages/");

    system("mv *.deb deb_packages/");
    
    system("mv *.png images/");
    system("mv *.jpg images/");
    system("mv *.jpeg images/");

    system("mv *.pdf docs/");
    system("mv *.docx docs");
    system("mv *.xlsx docs/");
    system("mv *.xls docs");

    system("mv *.sh shell_scripts/");

    return 0;
}