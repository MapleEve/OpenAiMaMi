// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1406a2cb0
// name: sub_1406A2CB0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_1406A2CB0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  char v6; // bl
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax

  switch ( *((_BYTE *)a2 + 208) )
  {
    case 0:
      v5 = *a2;
      a2[1] = 1;
      *((_DWORD *)a2 + 4) = 0;
      a2[3] = v5;
      *((_BYTE *)a2 + 88) = 0;
      break;
    case 1:
      sub_1416C3400(&off_141781F50, a2, a3, a4);
    case 2:
      sub_1416C3420(&off_141781F50, a2, a3, a4);
    case 3:
      break;
  }
  sub_1406A19A0(a1, a2 + 1, a3, a4);
  v6 = 3;
  if ( *a1 != -2 )
  {
    v7 = *((unsigned __int8 *)a2 + 88);
    v6 = 1;
    switch ( v7 )
    {
      case 5:
        goto LABEL_17;
      case 4:
        sub_14052DE20(a2 + 12);
        goto LABEL_17;
      case 3:
        v8 = a2[12];
        if ( v8 != -1 )
        {
          v9 = 5;
          if ( v8 < 0 )
            v9 = v8 ^ 0x8000000000000000uLL;
          if ( v9 < 4 )
          {
            v8 = a2[13];
            v10 = 13;
            goto LABEL_15;
          }
          v10 = 12;
          if ( v9 != 4 || (v8 = a2[13], v10 = 13, (unsigned __int64)v8 <= 0xFFFFFFFFFFFFFFFDuLL) )
          {
LABEL_15:
            if ( v8 )
              sub_140001660(a2[v10 + 1], v8, 1);
          }
        }
LABEL_17:
        sub_1400104F0(a2 + 7);
        break;
    }
  }
  *((_BYTE *)a2 + 208) = v6;
  return a2;
}