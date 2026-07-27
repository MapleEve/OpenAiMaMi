// module: codexmate_lib/core/debug_bundle
// addr: 0x140735f70
// name: sub_140735F70
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140735F70(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)())
{
  _DWORD *v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 (__fastcall *v20)(); // rdi
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 result; // rax
  _QWORD v25[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v26; // [rsp+38h] [rbp-48h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h]
  __int64 v28; // [rsp+50h] [rbp-30h]
  __int64 v29; // [rsp+58h] [rbp-28h] BYREF
  __int64 v30; // [rsp+60h] [rbp-20h]
  __int64 v31; // [rsp+68h] [rbp-18h]
  _QWORD *v32; // [rsp+78h] [rbp-8h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+80h] [rbp+0h]
  __int64 v34; // [rsp+88h] [rbp+8h]
  __int64 (__fastcall *v35)(); // [rsp+90h] [rbp+10h]
  __int64 v36; // [rsp+98h] [rbp+18h] BYREF
  _DWORD *v37; // [rsp+A0h] [rbp+20h]
  __int64 v38; // [rsp+A8h] [rbp+28h]
  __int64 v39; // [rsp+B0h] [rbp+30h]
  char v40; // [rsp+BFh] [rbp+3Fh]
  __int64 v41; // [rsp+C0h] [rbp+40h]

  v41 = -2;
  *(_QWORD *)&v26 = 0;
  v27 = 0;
  nullsub_1(a1);
  v8 = (_DWORD *)sub_140001650(7, 1);
  if ( !v8 )
    sub_1416C2D4B(1, 7);
  *(_DWORD *)((char *)v8 + 3) = 1684369520;
  *v8 = 1885956979;
  v36 = 7;
  v37 = v8;
  v38 = 7;
  LOWORD(v32) = 257;
  sub_140307860(&v29, &v26, &v36, &v32);
  if ( (_BYTE)v29 != 0xFF )
    sub_1400104F0(&v29);
  nullsub_1(v9);
  v10 = (_DWORD *)sub_140001650(4, 1);
  if ( !v10 )
    sub_1416C2D4B(1, 4);
  *v10 = 1851876211;
  v36 = 4;
  v37 = v10;
  v38 = 4;
  nullsub_1(v11);
  v12 = sub_140001650(a4, 1);
  v39 = v12;
  if ( !v12 )
    sub_1416C2D4B(1, a4);
  v13 = v12;
  sub_141684120(v12, a3, a4);
  LOBYTE(v32) = 3;
  v33 = a4;
  v34 = v13;
  v35 = a4;
  sub_140307860(&v29, &v26, &v36, &v32);
  if ( (_BYTE)v29 != 0xFF )
    sub_1400104F0(&v29);
  nullsub_1(v14);
  v15 = sub_140001650(6, 1);
  if ( !v15 )
    sub_1416C2D4B(1, 6);
  *(_WORD *)(v15 + 4) = 28271;
  *(_DWORD *)v15 = 1935762802;
  v36 = 6;
  v39 = v15;
  v37 = (_DWORD *)v15;
  v38 = 6;
  v16 = *(unsigned __int8 *)(a2 + 64);
  v17 = &unk_141788129;
  if ( *(_BYTE *)(a2 + 64) )
    v17 = &unk_141788131;
  v25[0] = v17;
  v25[1] = v16 | 8;
  v32 = v25;
  v33 = sub_14041F680;
  v34 = a2;
  v35 = (__int64 (__fastcall *)())sub_1400015F0;
  sub_14149C0F0(&v29, &unk_141787150, &v32);
  v19 = v30;
  v20 = (__int64 (__fastcall *)())v31;
  v39 = v29;
  v28 = v30;
  if ( v31 < 0 )
  {
    v21 = 0;
    goto LABEL_13;
  }
  if ( v31 )
  {
    nullsub_1(v18);
    v21 = 1;
    v22 = sub_140001650(v20, 1);
    if ( !v22 )
    {
LABEL_13:
      v40 = 1;
      sub_1416C2D4B(v21, v20);
    }
    v23 = v22;
    sub_141684120(v22, v19, v20);
  }
  else
  {
    v23 = 1;
  }
  LOBYTE(v32) = 3;
  v33 = v20;
  v34 = v23;
  v35 = v20;
  v40 = 0;
  sub_140307860(&v29, &v26, &v36, &v32);
  if ( (_BYTE)v29 != 0xFF )
    sub_1400104F0(&v29);
  if ( v39 )
    sub_140001660(v28, v39, 1);
  result = v27;
  *(_QWORD *)(a1 + 24) = v27;
  *(_OWORD *)(a1 + 8) = v26;
  *(_BYTE *)a1 = 5;
  return result;
}