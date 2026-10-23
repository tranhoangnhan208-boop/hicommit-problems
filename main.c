#include <stdio.h>
int main()
  {
  int code;
   scanf("%d",&code);
switch(XEP_LOAI)
{
    case 1:
      printf("%d",XEP_LOAI_XUAT_SAC); break;
    case 2:
      printf("%d",XEP_LOAI_GIOI); break;
    case 3:
      printf("%d",XEP_LOAI_KHA); break;
    case 4:
      printf("%d",XEP_LOAI_TRUNG_BINH); break;
    default
      printf("%d",KHONG_HOP_LE);
}
  return 0;
}