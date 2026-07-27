// module: codexmate_lib/core/relay/translator
// addr: 0x140557f80
// name: sub_140557F80
// win 1.2.1 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char *__fastcall sub_140557F80(_OWORD *a1, unsigned __int64 a2, __int64 a3)
{
  char *result; // rax
  __int64 v4; // rdx
  char *v5; // r8
  _OWORD *v6; // rsi
  unsigned int v7; // r9d
  int v8; // r10d
  __int64 v9; // rsi
  __int64 v10; // r11
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // [rsp+0h] [rbp-68h]
  __int128 v15; // [rsp+10h] [rbp-58h]
  __int128 v16; // [rsp+20h] [rbp-48h]
  __int128 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h]
  __int128 v19; // [rsp+50h] [rbp-18h]

  result = (char *)(a3 - 1);
  if ( a3 - 1 >= a2 )
    BUG();
  if ( a3 != a2 )
  {
    result = (char *)a1 + 104 * a2;
    v4 = 104 * a3;
    v5 = (char *)a1 + 104 * a3;
    do
    {
      v7 = *((_DWORD *)v5 + 24);
      if ( v7 < *((_DWORD *)v5 - 2) )
      {
        v19 = *((_OWORD *)v5 + 5);
        v18 = *((_OWORD *)v5 + 4);
        v17 = *((_OWORD *)v5 + 3);
        v16 = *((_OWORD *)v5 + 2);
        v15 = *((_OWORD *)v5 + 1);
        v14 = *(_OWORD *)v5;
        v8 = *((_DWORD *)v5 + 25);
        v9 = v4;
        do
        {
          v10 = v9;
          *(_QWORD *)((char *)a1 + v9 + 96) = *(_QWORD *)((char *)a1 + v9 - 8);
          *(_OWORD *)((char *)a1 + v9 + 80) = *(_OWORD *)((char *)a1 + v9 - 24);
          *(_OWORD *)((char *)a1 + v9 + 64) = *(_OWORD *)((char *)a1 + v9 - 40);
          v11 = *(_OWORD *)((char *)a1 + v9 - 104);
          v12 = *(_OWORD *)((char *)a1 + v9 - 88);
          v13 = *(_OWORD *)((char *)a1 + v9 - 72);
          *(_OWORD *)((char *)a1 + v9 + 48) = *(_OWORD *)((char *)a1 + v9 - 56);
          *(_OWORD *)((char *)a1 + v9 + 32) = v13;
          *(_OWORD *)((char *)a1 + v9 + 16) = v12;
          *(_OWORD *)((char *)a1 + v9) = v11;
          if ( v9 == 104 )
          {
            v6 = a1;
            goto LABEL_6;
          }
          v9 -= 104;
        }
        while ( v7 < *(_DWORD *)((char *)a1 + v10 - 112) );
        v6 = (_OWORD *)((char *)a1 + v9);
LABEL_6:
        v6[5] = v19;
        v6[4] = v18;
        v6[3] = v17;
        v6[2] = v16;
        v6[1] = v15;
        *v6 = v14;
        *(_DWORD *)((char *)a1 + v10 - 8) = v7;
        *(_DWORD *)((char *)a1 + v10 - 4) = v8;
      }
      v5 += 104;
      v4 += 104;
    }
    while ( v5 != result );
  }
  return result;
}