// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x14078e5c0
// name: sub_14078E5C0
// win 1.2.3 | module core/relay/codex_diagnostic.rs | attributed via call-graph propagation (>=2 same-module callers, global fanin<=6, single-module exclusive)
__int64 __fastcall sub_14078E5C0(__int64 a1, __int64 a2, char a3)
{
  const char *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r12
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 *v16; // rdi
  void *v17; // r9
  _BYTE v19[40]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+78h] [rbp-8h]
  __int64 v24; // [rsp+80h] [rbp+0h]
  __int64 v25; // [rsp+88h] [rbp+8h]
  __int64 v26; // [rsp+90h] [rbp+10h]
  __int128 v27; // [rsp+98h] [rbp+18h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+28h]
  _QWORD v29[2]; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v30; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD v31[2]; // [rsp+C8h] [rbp+48h] BYREF
  void *v32; // [rsp+D8h] [rbp+58h]
  __int64 v33; // [rsp+E0h] [rbp+60h]
  __int64 v34; // [rsp+E8h] [rbp+68h]
  __int128 v35; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v36; // [rsp+100h] [rbp+80h]
  __int64 v37; // [rsp+110h] [rbp+90h]
  __int128 v38; // [rsp+118h] [rbp+98h] BYREF
  __int128 *v39; // [rsp+128h] [rbp+A8h]
  __int64 (__fastcall *v40)(_QWORD, _QWORD); // [rsp+130h] [rbp+B0h]
  __int64 v41; // [rsp+138h] [rbp+B8h]

  v41 = -2;
  v5 = aOpenai_0;
  if ( (a3 & 1) != 0 )
    v5 = aAimai1_1;
  v31[0] = v5;
  v31[1] = 6;
  sub_1404C22C0(v19, a2, v5, 6);
  v7 = v23;
  v8 = v24;
  v9 = v25;
  v10 = v26;
  if ( v26 | v25 | v24 | v23 || v20 )
  {
    if ( v22 )
    {
      sub_140440300((unsigned int)&v38, v21, v22, (unsigned int)&unk_14178CCCE, 3);
      v36 = (__int64)v39;
      v35 = v38;
    }
    else
    {
      nullsub_1(v6);
      v12 = sub_140001650(9, 1);
      if ( !v12 )
        sub_1416C2D4B(1, 9);
      v11 = 0xBEE4BAA4E7A097E6uLL;
      *(_QWORD *)v12 = 0xBEE4BAA4E7A097E6uLL;
      *(_BYTE *)(v12 + 8) = -117;
      *(_QWORD *)&v35 = 9;
      *((_QWORD *)&v35 + 1) = v12;
      v36 = 9;
    }
    nullsub_1(v11);
    v13 = (void *)sub_140001650(27, 1);
    if ( !v13 )
      sub_1416C2D4B(1, 27);
    v32 = v13;
    qmemcpy(v13, "thread_provider_consistency", 27);
    nullsub_1(v14);
    v15 = sub_140001650(5, 1);
    if ( !v15 )
      sub_1416C2D4B(1, 5);
    *(_BYTE *)(v15 + 4) = 114;
    v33 = v15;
    *(_DWORD *)v15 = 1869771365;
    v30 = v20 + v7 + v8 + v10 + v9;
    v29[0] = &v30;
    v29[1] = sub_1414AC520;
    sub_14149C0F0(&v38, &unk_14178F46B, v29);
    v34 = *((_QWORD *)&v38 + 1);
    v37 = v38;
    v16 = v39;
    *(_QWORD *)&v38 = v31;
    *((_QWORD *)&v38 + 1) = sub_14041F680;
    v39 = &v35;
    v40 = sub_1400015F0;
    if ( (a3 & 1) != 0 )
      sub_14149C0F0(&v27, &unk_14178F4CD, &v38);
    else
      sub_14149C0F0(&v27, &unk_14178F48B, &v38);
    *(_QWORD *)(a1 + 88) = v28;
    *(_OWORD *)(a1 + 72) = v27;
    *(_QWORD *)a1 = 27;
    *(_QWORD *)(a1 + 8) = v32;
    *(_QWORD *)(a1 + 16) = 27;
    *(_QWORD *)(a1 + 24) = 5;
    *(_QWORD *)(a1 + 32) = v33;
    *(_QWORD *)(a1 + 40) = 5;
    *(_QWORD *)(a1 + 48) = v37;
    *(_QWORD *)(a1 + 56) = v34;
    *(_QWORD *)(a1 + 64) = v16;
    *(_BYTE *)(a1 + 96) = 1;
    if ( (_QWORD)v35 )
      sub_140001660(*((_QWORD *)&v35 + 1), v35, 1);
  }
  else
  {
    v17 = &unk_14178F52E;
    if ( (a3 & 1) != 0 )
      v17 = &unk_14178F54F;
    sub_140797030(a1, (unsigned int)&xmmword_14178D8AC, 27, (_DWORD)v17, 33);
  }
  return sub_14043F590(v19);
}