// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140a60790
// name: sub_140A60790
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140A60790(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r14
  _QWORD *v6; // r15
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r11
  bool v10; // zf
  _QWORD *v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // r9
  __int64 v14; // r8
  _QWORD *v15; // r10
  _QWORD *v16; // r12
  _QWORD *v17; // rdi
  _QWORD *v18; // r13
  _QWORD *v19; // r15
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rdi
  _QWORD *v23; // r12
  _QWORD *v24; // rdi
  _OWORD v26[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h]
  _QWORD *v28; // [rsp+58h] [rbp-28h] BYREF
  _QWORD *v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+68h] [rbp-18h]
  _QWORD *v31; // [rsp+70h] [rbp-10h]
  _QWORD *v32; // [rsp+78h] [rbp-8h]
  _QWORD *v33; // [rsp+80h] [rbp+0h]
  __int64 v34; // [rsp+88h] [rbp+8h]
  _QWORD *v35; // [rsp+90h] [rbp+10h]
  _QWORD *v36; // [rsp+98h] [rbp+18h]
  _QWORD *v37; // [rsp+A0h] [rbp+20h]
  _QWORD *v38; // [rsp+A8h] [rbp+28h]
  _QWORD *v39; // [rsp+B0h] [rbp+30h]
  __int64 v40; // [rsp+B8h] [rbp+38h]
  __int64 v41; // [rsp+C0h] [rbp+40h]
  __int64 v42; // [rsp+C8h] [rbp+48h]
  _QWORD *v43; // [rsp+D0h] [rbp+50h]
  _QWORD *v44; // [rsp+D8h] [rbp+58h]
  _QWORD *v45; // [rsp+E0h] [rbp+60h]
  _QWORD *v46; // [rsp+E8h] [rbp+68h]
  __int64 v47; // [rsp+F0h] [rbp+70h]
  _QWORD *v48; // [rsp+F8h] [rbp+78h]
  __int64 v49; // [rsp+100h] [rbp+80h]

  v49 = -2;
  v6 = *(_QWORD **)a2;
  sub_140A67BD0(&v28, a2 + 8);
  if ( v28 == (_QWORD *)-1LL )
  {
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_32;
    v22 = a2 + 16;
    sub_14042B0E0(&v28, v22, 0);
    v7 = v28;
    v8 = v30;
    v2 = v31;
    v48 = v29;
    if ( v28 == (_QWORD *)-1LL )
    {
      v40 = v30;
      sub_14042B0E0(&v28, v22, 1);
      v3 = v29;
      v47 = v30;
      v18 = v31;
      if ( v28 == (_QWORD *)-1LL )
      {
        v44 = v29;
        sub_14042B0E0(&v28, v22, 2);
        if ( v28 == (_QWORD *)-1LL )
        {
          v45 = v29;
          v41 = v30;
          v16 = v31;
        }
        else
        {
          sub_140982F30(&v28);
          v41 = 1;
          v45 = nullptr;
          v16 = nullptr;
        }
        sub_14042B0E0(&v28, v22, 3);
        v8 = (__int64)v28;
        v46 = v29;
        v27 = v30;
        v3 = v31;
        if ( v28 == (_QWORD *)-1LL )
        {
          sub_14042B0E0(&v28, v22, 4);
          if ( v28 == (_QWORD *)-1LL )
          {
            v7 = v29;
            v12 = v30;
            v8 = (__int64)v31;
          }
          else
          {
            sub_140982F30(&v28);
            v12 = 1;
            v8 = 0;
            v7 = nullptr;
          }
          v14 = (__int64)v48;
          v9 = v40;
          if ( v48 == (_QWORD *)-2LL )
            goto LABEL_32;
          if ( v48 != (_QWORD *)-1LL )
          {
            v13 = v26;
            v17 = (_QWORD *)v47;
            v15 = v44;
            v19 = v45;
            v47 = (__int64)v3;
            v42 = v41;
            goto LABEL_6;
          }
          v36 = v16;
          v37 = v18;
          v43 = (_QWORD *)v47;
          v47 = (__int64)v44;
          v38 = v45;
          v42 = v41;
          v48 = v2;
          v39 = (_QWORD *)v40;
        }
        else
        {
          v39 = v28;
          v37 = v32;
          v38 = v33;
          v42 = v34;
          v23 = v35;
          if ( v45 )
            sub_140001660(v41, v45, 1);
          v7 = v44;
          v24 = v48;
          v2 = (_QWORD *)v40;
          if ( v44 )
            sub_140001660(v47, v44, 1);
          v36 = v23;
          if ( v24 )
            sub_140001660(v2, v24, 1);
          v43 = v3;
          v47 = v27;
          v48 = v46;
        }
      }
      else
      {
        v39 = v28;
        v37 = v32;
        v38 = v33;
        v42 = v34;
        v7 = v48;
        v8 = v40;
        v36 = v35;
        v43 = v31;
        if ( v48 )
          sub_140001660(v40, v48, 1);
        v48 = v3;
      }
    }
    else
    {
      v39 = v28;
      v37 = v32;
      v38 = v33;
      v42 = v34;
      v36 = v35;
      v43 = v31;
      v47 = v30;
    }
  }
  else
  {
    v39 = v28;
    v48 = v29;
    v47 = v30;
    v43 = v31;
    v37 = v32;
    v38 = v33;
    v42 = v34;
    v36 = v35;
  }
  v10 = *v6 == -1;
  v46 = v6;
  if ( !v10 )
    sub_140982F30(v46);
  v11 = v46;
  *v46 = v39;
  v12 = (__int64)v48;
  v11[1] = v48;
  v13 = v11 + 2;
  v14 = -1;
  v15 = (_QWORD *)v47;
  v16 = v36;
  v17 = v43;
  v18 = v37;
  v19 = v38;
LABEL_6:
  *v13 = v15;
  v13[1] = v17;
  v13[2] = v18;
  v13[3] = v19;
  v13[4] = v42;
  v13[5] = v16;
  if ( v14 == -1 )
  {
LABEL_32:
    *(_QWORD *)a1 = -1;
    return a1;
  }
  v20 = v26[0];
  v21 = v26[1];
  *(_OWORD *)(a1 + 56) = v26[2];
  *(_OWORD *)(a1 + 40) = v21;
  *(_OWORD *)(a1 + 24) = v20;
  *(_QWORD *)(a1 + 80) = v27;
  *(_QWORD *)(a1 + 88) = v3;
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 72) = v46;
  *(_QWORD *)(a1 + 96) = v7;
  *(_QWORD *)(a1 + 104) = v12;
  *(_QWORD *)(a1 + 112) = v8;
  return a1;
}