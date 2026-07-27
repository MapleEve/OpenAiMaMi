// module: codexmate_lib/core/relay/codex_project_state
// addr: 0x14049b870
// name: sub_14049B870
// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14049B870(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rcx
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  _BYTE *v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h]
  unsigned __int64 v12; // [rsp+30h] [rbp-58h]
  _QWORD v13[5]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v14; // [rsp+60h] [rbp-28h]
  __int64 v15; // [rsp+70h] [rbp-18h]
  __int16 v16; // [rsp+78h] [rbp-10h]

  v13[0] = 0x2F0000005CLL;
  v13[1] = a1;
  v13[2] = a2;
  v13[3] = a1;
  v13[4] = a1 + a2;
  v14 = 0;
  v15 = a2;
  v16 = 1;
  sub_14031CA20(&v10, v13);
  if ( v12 >= 3 )
  {
    v5 = v12 + 1;
    v6 = (_QWORD *)(v11 + 40);
    while ( 1 )
    {
      if ( *(v6 - 4) == 9 )
      {
        v7 = (_BYTE *)*(v6 - 5);
        if ( (*v7 | (unsigned __int8)(32 * ((unsigned __int8)(*v7 - 65) < 0x1Au))) == 100
          && (v7[1] | (unsigned __int8)(32 * ((unsigned __int8)(v7[1] - 65) < 0x1Au))) == 111
          && (v7[2] | (unsigned __int8)(32 * ((unsigned __int8)(v7[2] - 65) < 0x1Au))) == 99
          && (v7[3] | (unsigned __int8)(32 * ((unsigned __int8)(v7[3] - 65) < 0x1Au))) == 117
          && (v7[4] | (unsigned __int8)(32 * ((unsigned __int8)(v7[4] - 65) < 0x1Au))) == 109
          && (v7[5] | (unsigned __int8)(32 * ((unsigned __int8)(v7[5] - 65) < 0x1Au))) == 101
          && (v7[6] | (unsigned __int8)(32 * ((unsigned __int8)(v7[6] - 65) < 0x1Au))) == 110
          && (v7[7] | (unsigned __int8)(32 * ((unsigned __int8)(v7[7] - 65) < 0x1Au))) == 116
          && (v7[8] | (unsigned __int8)(32 * ((unsigned __int8)(v7[8] - 65) < 0x1Au))) == 115
          && *(v6 - 2) == 5 )
        {
          v8 = (_BYTE *)*(v6 - 3);
          if ( (*v8 | (unsigned __int8)(32 * ((unsigned __int8)(*v8 - 65) < 0x1Au))) == 99
            && (v8[1] | (unsigned __int8)(32 * ((unsigned __int8)(v8[1] - 65) < 0x1Au))) == 111
            && (v8[2] | (unsigned __int8)(32 * ((unsigned __int8)(v8[2] - 65) < 0x1Au))) == 100
            && (v8[3] | (unsigned __int8)(32 * ((unsigned __int8)(v8[3] - 65) < 0x1Au))) == 101
            && (v8[4] | (unsigned __int8)(32 * ((unsigned __int8)(v8[4] - 65) < 0x1Au))) == 120
            && *v6 == 10 )
          {
            v9 = (_BYTE *)*(v6 - 1);
            if ( v9[4] == 45
              && v9[7] == 45
              && (unsigned __int8)(*v9 - 58) >= 0xF6u
              && (unsigned __int8)(v9[1] - 58) >= 0xF6u
              && (unsigned __int8)(v9[2] - 58) >= 0xF6u
              && (unsigned __int8)(v9[3] - 58) >= 0xF6u
              && (unsigned __int8)(v9[5] - 58) >= 0xF6u
              && (unsigned __int8)(v9[6] - 58) >= 0xF6u
              && (unsigned __int8)(v9[8] - 58) >= 0xF6u
              && (unsigned __int8)(v9[9] - 48) < 0xAu )
            {
              break;
            }
          }
        }
      }
      --v5;
      v6 += 2;
      if ( v5 <= 3 )
        goto LABEL_2;
    }
    LOBYTE(v2) = 1;
    v3 = v10;
    if ( v10 )
      goto LABEL_3;
  }
  else
  {
LABEL_2:
    v2 = 0;
    v3 = v10;
    if ( v10 )
LABEL_3:
      sub_140001660(v11, 16 * v3, 8);
  }
  return v2;
}