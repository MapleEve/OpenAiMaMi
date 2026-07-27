// module: codexmate_lib/platform/debug_log
// addr: 0x140355c60
// name: write_client_event
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::platform::debug_log::write_client_event | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall write_client_event(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  _DWORD *v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 result; // rax
  __int128 v25; // [rsp+28h] [rbp-58h] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h]
  _QWORD v27[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v28[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v29[3]; // [rsp+68h] [rbp-18h] BYREF
  __int128 v30; // [rsp+80h] [rbp+0h] BYREF
  _QWORD *v31; // [rsp+90h] [rbp+10h]
  __int64 (__fastcall *v32)(_QWORD, _QWORD); // [rsp+98h] [rbp+18h]
  __int128 *v33; // [rsp+A0h] [rbp+20h]
  __int64 (__fastcall *v34)(_QWORD, _QWORD); // [rsp+A8h] [rbp+28h]
  __int128 *v35; // [rsp+B0h] [rbp+30h]
  __int64 (__fastcall *v36)(_QWORD, _QWORD); // [rsp+B8h] [rbp+38h]
  _QWORD *v37; // [rsp+C0h] [rbp+40h]
  __int64 (__fastcall *v38)(_QWORD, _QWORD); // [rsp+C8h] [rbp+48h]
  __int128 *v39; // [rsp+D0h] [rbp+50h]
  __int64 (__fastcall *v40)(_QWORD, _QWORD); // [rsp+D8h] [rbp+58h]
  __int64 v41; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v42; // [rsp+E8h] [rbp+68h]
  __int64 v43; // [rsp+F0h] [rbp+70h]
  _QWORD *v44; // [rsp+F8h] [rbp+78h]
  __int64 v45; // [rsp+100h] [rbp+80h]
  __int64 v46; // [rsp+108h] [rbp+88h]
  __int128 v47; // [rsp+110h] [rbp+90h] BYREF
  __int64 v48; // [rsp+120h] [rbp+A0h]
  __int128 v49; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v50; // [rsp+140h] [rbp+C0h]
  _QWORD *v51; // [rsp+148h] [rbp+C8h]
  __int128 v52; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v53; // [rsp+160h] [rbp+E0h]
  _QWORD *v54; // [rsp+170h] [rbp+F0h]
  __int64 v55; // [rsp+178h] [rbp+F8h]

  v55 = -2;
  v54 = a3;
  v51 = a2;
  v11 = a1[1];
  v44 = a1;
  v12 = a1[2];
  v45 = v11;
  v27[0] = sub_140406340(v11, v12);
  v27[1] = v13;
  v14 = v51[1];
  sub_140406D80(v29, v14, v51[2], 96);
  v15 = v54[1];
  sub_140406D80(v28, v15, v54[2], 4000);
  if ( a6 && a7 )
  {
    sub_140406D80(&v30, a6, a7, 64);
    v50 = (__int64)v31;
    v49 = v30;
    v18 = a8;
    if ( !a8 )
      goto LABEL_10;
  }
  else
  {
    nullsub_1(v16);
    v19 = (_DWORD *)sub_140001650(7, 1);
    if ( !v19 )
      sub_1416C2D4B(1, 7);
    *(_DWORD *)((char *)v19 + 3) = 1853321070;
    *v19 = 1852534389;
    *(_QWORD *)&v49 = 7;
    *((_QWORD *)&v49 + 1) = v19;
    v50 = 7;
    v18 = a8;
    if ( !a8 )
    {
LABEL_10:
      nullsub_1(v17);
      v20 = (_DWORD *)sub_140001650(7, 1);
      if ( !v20 )
        sub_1416C2D4B(1, 7);
      *(_DWORD *)((char *)v20 + 3) = 1853321070;
      *v20 = 1852534389;
      *(_QWORD *)&v47 = 7;
      *((_QWORD *)&v47 + 1) = v20;
      v48 = 7;
      if ( !a4 )
        goto LABEL_16;
      goto LABEL_12;
    }
  }
  if ( !a9 )
    goto LABEL_10;
  sub_140406D80(&v30, v18, a9, 300);
  v48 = (__int64)v31;
  v47 = v30;
  if ( !a4 )
    goto LABEL_16;
LABEL_12:
  if ( !a5 )
  {
LABEL_16:
    *(_QWORD *)&v52 = 0;
    *((_QWORD *)&v52 + 1) = 1;
    v53 = 0;
    goto LABEL_17;
  }
  sub_140406D80(&v30, a4, a5, 8000);
  *(_QWORD *)&v52 = &v30;
  *((_QWORD *)&v52 + 1) = sub_1400015F0;
  sub_14149C0F0(&v25, &unk_14174C834, &v52);
  if ( (_QWORD)v30 )
    sub_140001660(*((_QWORD *)&v30 + 1), v30, 1);
  v52 = v25;
  v53 = v26;
LABEL_17:
  *(_QWORD *)&v30 = v27;
  *((_QWORD *)&v30 + 1) = sub_14041F680;
  v31 = v29;
  v32 = sub_1400015F0;
  v33 = &v49;
  v34 = sub_1400015F0;
  v35 = &v47;
  v36 = sub_1400015F0;
  v37 = v28;
  v38 = sub_1400015F0;
  v39 = &v52;
  v40 = sub_1400015F0;
  sub_14149C0F0(&v41, &unk_141749F8D, &v30);
  if ( dword_141EC24A0 )
  {
    v21 = v41;
    if ( !v41 )
      goto LABEL_23;
    v22 = v42;
  }
  else
  {
    v46 = v42;
    sub_1404032D0(&unk_141EC2480, v42, v43);
    v21 = v41;
    if ( !v41 )
      goto LABEL_23;
    v22 = v46;
  }
  sub_140001660(v22, v21, 1);
LABEL_23:
  v23 = v51;
  if ( (_QWORD)v52 )
    sub_140001660(*((_QWORD *)&v52 + 1), v52, 1);
  if ( (_QWORD)v47 )
    sub_140001660(*((_QWORD *)&v47 + 1), v47, 1);
  if ( (_QWORD)v49 )
    sub_140001660(*((_QWORD *)&v49 + 1), v49, 1);
  if ( v28[0] )
    sub_140001660(v28[1], v28[0], 1);
  if ( v29[0] )
    sub_140001660(v29[1], v29[0], 1);
  if ( *v54 )
    sub_140001660(v15, *v54, 1);
  if ( *v23 )
    sub_140001660(v14, *v23, 1);
  result = (__int64)v44;
  if ( *v44 )
    return sub_140001660(v45, *v44, 1);
  return result;
}
