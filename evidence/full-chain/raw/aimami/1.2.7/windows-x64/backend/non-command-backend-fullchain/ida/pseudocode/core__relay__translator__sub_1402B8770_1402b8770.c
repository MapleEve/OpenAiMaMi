// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402b8770 | name sub_1402B8770
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1402B8770(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbx
  int v14; // eax
  char v15; // cl
  __int128 v16; // xmm0
  _OWORD *v17; // rax
  __int128 v18; // xmm0
  _OWORD *v19; // rax
  __int64 v20; // [rsp+28h] [rbp-48h]
  __int64 v21; // [rsp+30h] [rbp-40h]
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  __int128 v24; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  char v26; // [rsp+6Eh] [rbp-2h]
  char v27; // [rsp+6Fh] [rbp-1h]
  __int64 v28; // [rsp+70h] [rbp+0h]

  v28 = -2;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    v21 = *(_QWORD *)(a1 + 40);
LABEL_3:
    v7 = v4 + 8;
    v8 = *(unsigned __int16 *)(v4 + 1066);
    v25 = v4;
    v9 = (_QWORD *)(v4 + 248);
    v20 = v8;
    v10 = 3LL * (unsigned int)(8 * v8);
    v11 = -1;
    do
    {
      if ( !v10 )
      {
        v11 = v20;
LABEL_11:
        if ( !v21 )
          return;
        --v21;
        v4 = *(_QWORD *)(v25 + 8 * v11 + 1072);
        goto LABEL_3;
      }
      v12 = v7 + 24;
      v13 = a4 - *(_QWORD *)(v7 + 16);
      v14 = sub_1418F4B70(a3, *(_QWORD *)(v7 + 8));
      if ( v14 )
        v13 = v14;
      v15 = (v13 > 0) - (v13 < 0);
      v9 += 9;
      ++v11;
      v10 -= 24;
      v7 = v12;
    }
    while ( v15 == 1 );
    if ( v15 )
      goto LABEL_11;
    sub_1416AC440((char *)&v23 + 8, v9 - 6);
    LOBYTE(v23) = 3;
    v27 = 1;
    v25 = sub_141641AF0(aName_2, 4, a2);
    sub_14002F9D0(v25);
    v16 = v23;
    v17 = (_OWORD *)v25;
    *(_OWORD *)(v25 + 16) = v24;
    *v17 = v16;
    if ( *v9 != -1 )
    {
      sub_1416AC440((char *)&v23 + 8, v9);
      LOBYTE(v23) = 3;
      v26 = 1;
      v25 = sub_141641AF0(aNamespace, 9, a2);
      sub_14002F9D0(v25);
      v18 = v23;
      v19 = (_OWORD *)v25;
      *(_OWORD *)(v25 + 16) = v24;
      *v19 = v18;
    }
  }
}
