// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140231340 | name sub_140231340
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_140231340(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  char *v6; // r13
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  char *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  __int128 v12; // xmm0
  __m128i v13[37]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v14[38]; // [rsp+278h] [rbp+1F8h] BYREF
  __int64 v15; // [rsp+4D8h] [rbp+458h]
  __m128i v16[39]; // [rsp+738h] [rbp+6B8h] BYREF
  __m128i v17[2]; // [rsp+9A8h] [rbp+928h] BYREF
  char v18; // [rsp+9D7h] [rbp+957h]
  __int64 v19; // [rsp+C18h] [rbp+B98h] BYREF
  __int64 v20; // [rsp+C20h] [rbp+BA0h]
  __int64 v21; // [rsp+C28h] [rbp+BA8h]
  __int64 v22; // [rsp+C38h] [rbp+BB8h] BYREF
  __int64 v23; // [rsp+C40h] [rbp+BC0h]
  __int64 v24; // [rsp+C48h] [rbp+BC8h]
  __int64 v25; // [rsp+C58h] [rbp+BD8h] BYREF
  _QWORD *v26; // [rsp+C60h] [rbp+BE0h]
  unsigned __int64 v27; // [rsp+C68h] [rbp+BE8h]
  __int64 v28; // [rsp+C78h] [rbp+BF8h]
  __int64 v29; // [rsp+C80h] [rbp+C00h]

  v29 = -2;
  if ( (_BYTE)a4 != 7 )
  {
    v4 = a4;
    sub_141695AF0(v14, a1, a2);
    if ( v14[0].m128i_i32[0] == 2 )
    {
      v17[0].m128i_i64[1] = v14[0].m128i_i64[1];
      v17[0].m128i_i64[0] = 2;
LABEL_5:
      sub_14018FC00(v17);
      return;
    }
    sub_1418F44E0(v17, v14, 0x270u);
    if ( v17[0].m128i_i64[0] == 2 )
      goto LABEL_5;
    sub_1418F44E0(v16, v17, 0x270u);
    v14[0].m128i_i64[0] = 0;
    v15 = 0;
    LOBYTE(v4) = v4 + 1;
    while ( 1 )
    {
      while ( 1 )
      {
        sub_140289710(v13, v14);
        if ( !v13[0].m128i_i64[0] )
        {
          sub_140191C80(v14);
          return;
        }
        sub_1418F44E0(v17, v13, 0x258u);
        sub_14168A660(&v22, v17);
        if ( (v17[0].m128i_i8[8] & 0x10) == 0
          || (((unsigned __int8)(v18 & 0x20) >> 5) & (unsigned __int8)((unsigned __int32)v17[0].m128i_i32[2] >> 10)) != 0 )
        {
          break;
        }
        sub_140231340(v23, v24, a3, v4);
LABEL_16:
        if ( v22 )
          sub_140001660(v23, v22, 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)v17[0].m128i_i64[0]) )
          goto LABEL_19;
      }
      sub_14168A770(&v19, v17);
      v28 = v20;
      sub_1416B3AE0(&v25, v20, v21);
      if ( (_DWORD)v25 == 1 || v27 < 8 || *v26 != 0x2D74756F6C6C6F72LL )
      {
LABEL_14:
        if ( v19 )
          sub_140001660(v28, v19, 1);
        goto LABEL_16;
      }
      v6 = (char *)(v26 + 1);
      if ( v27 - 8 >= 0xA )
      {
        if ( !(*(_QWORD *)&v6[v27 - 18] ^ 0x7A2E6C6E6F736A2ELL | *(unsigned __int16 *)&v6[v27 - 10] ^ 0x7473LL) )
        {
          v7 = v27 - 18;
          if ( v27 - 18 >= 0x24 )
            goto LABEL_28;
          goto LABEL_33;
        }
      }
      else if ( v27 - 8 < 6 )
      {
        goto LABEL_14;
      }
      if ( *(_DWORD *)&v6[v27 - 14] ^ 0x6F736A2E | *(unsigned __int16 *)&v6[v27 - 10] ^ 0x6C6E )
        goto LABEL_14;
      v7 = v27 - 14;
      if ( v27 - 14 >= 0x24 )
      {
LABEL_28:
        v8 = v7 - 36;
        if ( !v8 || v6[v8] >= -64 )
        {
          v9 = &v6[v8];
          sub_141568FC0((__int64)&v25);
          if ( (_DWORD)v25 == -1 )
          {
            nullsub_1(v10);
            v11 = sub_140001650(36, 1);
            if ( !v11 )
              sub_141938D2B(1, 36);
            *(_DWORD *)(v11 + 32) = *((_DWORD *)v9 + 8);
            v12 = *(_OWORD *)v9;
            *(_OWORD *)(v11 + 16) = *((_OWORD *)v9 + 1);
            *(_OWORD *)v11 = v12;
            v25 = 36;
            v26 = (_QWORD *)v11;
            v27 = 36;
            sub_1403AAB80(a3, &v25);
          }
        }
      }
LABEL_33:
      if ( v19 )
        sub_140001660(v28, v19, 1);
      if ( v22 )
        sub_140001660(v23, v22, 1);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v17[0].m128i_i64[0]) )
LABEL_19:
        sub_14119A730(v17);
    }
  }
}
