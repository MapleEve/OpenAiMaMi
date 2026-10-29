// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x14046c950 | name sub_14046C950
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_14046C950(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // bl
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  switch ( *((_BYTE *)a2 + 208) )
  {
    case 0:
      v4 = *a2;
      a2[1] = 1;
      *((_DWORD *)a2 + 4) = 0;
      a2[3] = v4;
      *((_BYTE *)a2 + 88) = 0;
      break;
    case 1:
      sub_1419393E0(&off_1419F1930);
    case 2:
      sub_141939400(&off_1419F1930);
    case 3:
      break;
  }
  sub_14046B370(a1, a2 + 1, a3);
  v5 = 3;
  if ( *a1 != -2 )
  {
    v6 = *((unsigned __int8 *)a2 + 88);
    v5 = 1;
    switch ( v6 )
    {
      case 5:
        goto LABEL_17;
      case 4:
        sub_14040CAE0(a2 + 12);
        goto LABEL_17;
      case 3:
        v7 = a2[12];
        if ( v7 != -1 )
        {
          v8 = 5;
          if ( v7 < 0 )
            v8 = v7 ^ 0x8000000000000000uLL;
          if ( v8 < 4 )
          {
            v7 = a2[13];
            v9 = 13;
            goto LABEL_15;
          }
          v9 = 12;
          if ( v8 != 4 || (v7 = a2[13], v9 = 13, (unsigned __int64)v7 <= 0xFFFFFFFFFFFFFFFDuLL) )
          {
LABEL_15:
            if ( v7 )
              sub_140001660(a2[v9 + 1], v7, 1);
          }
        }
LABEL_17:
        sub_140409B40(a2 + 7);
        break;
    }
  }
  *((_BYTE *)a2 + 208) = v5;
  return a2;
}
