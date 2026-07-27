// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1411f6000
// name: __u7b__u7b_closure_u7d__u7d__21
// win 1.2.3 | = mac codexmate_lib::core::relay::proxy_server::inject_hint_into_error::_$u7b$$u7b$closure$u7d$$u7d$ | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall _u7b__u7b_closure_u7d__u7d__21(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int128 *v11; // r14
  __int64 v12; // rsi
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  __int64 (__fastcall **v32)(); // rdx
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdi
  void (__fastcall *v35)(unsigned __int64 *, unsigned __int64, __int64); // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 result; // rax
  unsigned __int128 *v40; // rcx
  unsigned __int128 v41; // xmm0
  __int64 v42; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 *v44; // [rsp+40h] [rbp-40h]
  unsigned __int128 v45; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int128 v46; // [rsp+58h] [rbp-28h]
  __int64 v47; // [rsp+68h] [rbp-18h]
  unsigned __int128 v48; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int128 v49; // [rsp+80h] [rbp+0h]
  __int64 v50; // [rsp+90h] [rbp+10h]
  unsigned __int64 v51; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v52; // [rsp+A0h] [rbp+20h]
  __int64 v53; // [rsp+A8h] [rbp+28h]
  unsigned __int64 v54; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int128 *v55; // [rsp+B8h] [rbp+38h]
  __int64 v56; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v57; // [rsp+C8h] [rbp+48h]
  __int64 v58; // [rsp+D0h] [rbp+50h]
  unsigned __int64 v59; // [rsp+D8h] [rbp+58h]
  char v60; // [rsp+E6h] [rbp+66h] BYREF
  char v61; // [rsp+E7h] [rbp+67h]
  __int64 v62; // [rsp+E8h] [rbp+68h]

  v62 = -2;
  v3 = (_QWORD *)*a1;
  v4 = a1[2];
  v5 = v3[5];
  if ( v4 >= v5 )
    sub_1416C30E3(v4, v5, &off_141935D28);
  v6 = 104 * v4;
  v7 = v3[4] + v6;
  if ( (*(_BYTE *)v7 & 1) == 0 )
  {
    v11 = (unsigned __int128 *)(v7 + 24);
    v18 = *((_QWORD *)v11 + 2);
    v13 = v18 == -9;
    v14 = v18 + 9;
    if ( v14 >= 0 )
      goto LABEL_5;
LABEL_9:
    v15 = 0;
    goto LABEL_10;
  }
  v8 = *(_QWORD *)(v7 + 16);
  v9 = v3[8];
  if ( v8 >= v9 )
    sub_1416C30E3(v8, v9, &off_141935F08);
  v10 = v3[7];
  v6 = 9 * v8;
  v11 = (unsigned __int128 *)(v10 + 8 * v6 + 32);
  v12 = *(_QWORD *)(v10 + 8 * v6 + 48);
  v13 = v12 == -9;
  v14 = v12 + 9;
  if ( v14 < 0 )
    goto LABEL_9;
LABEL_5:
  if ( !v13 )
  {
    nullsub_1(v6);
    v15 = 1;
    v16 = sub_140001650(v14, 1);
    if ( v16 )
    {
      v17 = v16;
      goto LABEL_12;
    }
LABEL_10:
    sub_1416C2D4B(v15, v14);
  }
  v17 = 1;
LABEL_12:
  _BitScanReverse64(&v19, (unsigned __int64)v14 >> 10);
  v20 = (v19 ^ 0xFFFFFFFFFFFFFFC0uLL) + 65;
  v21 = 7;
  if ( v20 < 7 )
    v21 = v20;
  v56 = v17;
  v57 = 0;
  v58 = v14;
  v59 = 4LL * v21 + 1;
  v22 = *((_QWORD *)v11 + 1);
  v23 = *((_QWORD *)v11 + 2);
  if ( v23 <= v14 )
  {
    v24 = 0;
  }
  else
  {
    v61 = 1;
    LOBYTE(a3) = 1;
    sub_141445770(&v56, v23, a3);
    v17 = v56;
    v24 = v57;
  }
  sub_141684120(v24 + v17, v22, v23);
  if ( v23 > v58 - v57 )
  {
    *(_QWORD *)&v45 = v23;
    *((_QWORD *)&v45 + 1) = v58 - v57;
    v61 = 1;
    sub_1416C0590(&v45);
  }
  v26 = v23 + v57;
  v57 = v26;
  if ( (unsigned __int64)(v58 - v26) <= 1 )
  {
    v61 = 1;
    LOBYTE(v25) = 1;
    sub_141445770(&v56, 2, v25);
    v26 = v57;
  }
  *(_WORD *)(v56 + v26) = 8236;
  if ( (unsigned __int64)(v58 - v57) <= 1 )
  {
    *(_QWORD *)&v45 = 2;
    *((_QWORD *)&v45 + 1) = v58 - v57;
    v61 = 1;
    sub_1416C0590(&v45);
  }
  v27 = v57 + 2;
  v57 = v27;
  if ( (unsigned __int64)(v58 - v27) <= 6 )
  {
    v61 = 1;
    LOBYTE(v25) = 1;
    sub_141445770(&v56, 7, v25);
    v27 = v57;
  }
  v28 = v56;
  *(_DWORD *)(v56 + v27 + 3) = 1684368238;
  *(_DWORD *)(v28 + v27) = 1853188195;
  if ( (unsigned __int64)(v58 - v57) <= 6 )
  {
    *(_QWORD *)&v45 = 7;
    *((_QWORD *)&v45 + 1) = v58 - v57;
    v61 = 1;
    sub_1416C0590(&v45);
  }
  v29 = v57 + 7;
  v57 += 7;
  v30 = v56;
  v31 = v59;
  if ( (v59 & 1) != 0 )
  {
    v33 = v59 >> 5;
    v51 = (v59 >> 5) + v58;
    v52 = v56 - (v59 >> 5);
    v53 = (v59 >> 5) + v29;
    v61 = 0;
    sub_141447740(&v48, &v51);
    v43 = v33;
    v29 = v49 - v33;
    if ( (unsigned __int64)v49 < v33 )
    {
      v55 = (unsigned __int128 *)v49;
      v42 = v49;
      *(_QWORD *)&v45 = &v43;
      *((_QWORD *)&v45 + 1) = sub_1401C5400;
      *(_QWORD *)&v46 = &v42;
      *((_QWORD *)&v46 + 1) = sub_1401C5400;
      sub_1416C32C0(&unk_141935EA8, &v45, &off_141935ED8);
    }
    v34 = *((_QWORD *)&v48 + 1) + v33;
    v32 = (__int64 (__fastcall **)())v48;
    v52 = v34;
    v53 = v29;
    v54 = *((_QWORD *)&v49 + 1);
    v51 = 0;
    if ( !(_QWORD)v48 )
    {
      v44 = &v54;
      sub_1416C3040(&off_141935210);
    }
    v30 = v34;
    v31 = *((_QWORD *)&v49 + 1);
  }
  else
  {
    v52 = v56;
    v53 = v29;
    v54 = v59;
    v51 = 0;
    v32 = off_141EC9020[0];
  }
  v48 = __PAIR128__(v30, (unsigned __int64)v32);
  *(_QWORD *)&v49 = v29;
  *((_QWORD *)&v49 + 1) = v31;
  v44 = &v54;
  sub_141443DC0(&v45, &v48);
  if ( v51 )
  {
    v35 = *(void (__fastcall **)(unsigned __int64 *, unsigned __int64, __int64))(v51 + 32);
    v61 = 0;
    v35(&v54, v52, v53);
  }
  if ( (_BYTE)v47 == 2 )
  {
    v61 = 0;
    sub_1416C3060(
      (unsigned int)aOriginalHeader,
      41,
      (unsigned int)&v60,
      (unsigned int)&unk_1419359F8,
      (__int64)&off_141935DD0);
  }
  v50 = v47;
  v49 = v46;
  v48 = v45;
  v36 = *(_QWORD *)v11;
  v37 = *((_QWORD *)v11 + 1);
  v38 = *((_QWORD *)v11 + 2);
  v55 = v11;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v36 + 32))((_QWORD *)v11 + 3, v37, v38);
  result = v50;
  v40 = v55;
  *((_QWORD *)v55 + 4) = v50;
  v41 = v48;
  v40[1] = v49;
  *v40 = v41;
  return result;
}