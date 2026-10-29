// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x140c47260 | successor of pre-update 0x140bbdd60 | session <审计会话>
// match evidence: {"body_sim": 0.456, "verdict": "CONFIRMED_DIFF_CAND"}
__int64 __fastcall sub_140C47260(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v4; // r11
  __int64 v6; // r12
  __int64 v7; // rsi
  unsigned __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  __int64 *v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rax
  unsigned __int8 (__fastcall *v29)(unsigned __int64); // rax
  __int64 v30; // rax
  char v31; // cl
  __int64 v32; // r13
  __int64 *v33; // rdi
  unsigned __int64 v35; // [rsp+38h] [rbp-48h] BYREF
  __int64 v36; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-38h]
  __int64 v38; // [rsp+50h] [rbp-30h]
  char v39; // [rsp+58h] [rbp-28h]
  unsigned __int64 v40; // [rsp+60h] [rbp-20h]
  __int64 v41; // [rsp+68h] [rbp-18h]
  __int64 v42; // [rsp+70h] [rbp-10h]
  __int64 v43; // [rsp+78h] [rbp-8h]
  __int64 v44; // [rsp+80h] [rbp+0h]
  __int64 v45; // [rsp+88h] [rbp+8h]
  __int64 *v46; // [rsp+90h] [rbp+10h]
  char v47; // [rsp+9Eh] [rbp+1Eh]
  char v48; // [rsp+9Fh] [rbp+1Fh]
  __int64 v49; // [rsp+A0h] [rbp+20h]

  v49 = -2;
  v4 = a2;
  v6 = *a2;
  v7 = a2[2];
  v8 = 0x2000;
  v41 = a3;
  if ( a3 != 1 )
  {
LABEL_8:
    if ( (unsigned __int64)(v6 - v7) < 0x20 )
    {
      v12 = v8;
      v13 = v4;
      if ( sub_140C7F5B0(a1, v4) == 1 )
        return 1;
      if ( !v14 )
        return 0;
      v4 = v13;
      v10 = *v13;
      v11 = v13[2];
      v8 = v12;
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  if ( a4 <= 0xFFFFFFFFFFFFFBFFuLL )
  {
    v9 = ((_WORD)a4 + 1024) & 0x1FFF;
    if ( a4 - v9 + 9216 >= a4 + 1024 )
      v8 = a4 - v9 + 9216;
    if ( (((_WORD)a4 + 1024) & 0x1FFF) == 0 )
      v8 = a4 + 1024;
    v10 = v6;
    v11 = v7;
    if ( a4 )
      goto LABEL_13;
    goto LABEL_8;
  }
LABEL_12:
  v10 = v6;
  v11 = v7;
LABEL_13:
  v42 = v7;
  v47 = v41 & 1;
  v46 = v4;
  v45 = v6;
  while ( 1 )
  {
    if ( v11 == v10 && v10 == v6 )
    {
      v15 = v8;
      v16 = a1;
      v17 = a1;
      v18 = v4;
      if ( sub_140C7F5B0(v17, v4) == 1 )
        return 1;
      v20 = v18[2];
      if ( !v19 )
        return 0;
      v4 = v18;
      v10 = *v18;
      v8 = v15;
      a1 = v16;
      v11 = v20;
    }
    v43 = v8;
    if ( v11 == v10 )
      break;
LABEL_20:
    v21 = v11 + v4[1];
    v44 = v10;
    v22 = v10 - v11;
    v23 = v10 - v11;
    if ( v8 < v10 - v11 )
      v23 = v8;
    v36 = v21;
    v37 = v23;
    v38 = 0;
    v39 = 0;
    v24 = sub_14083F7D0(a1, &v36);
    v40 = v24;
    if ( v24 )
    {
      v27 = v24;
      while ( 2 )
      {
        switch ( v27 & 3 )
        {
          case 0uLL:
            if ( *(_BYTE *)(v27 + 16) == 35 )
              goto LABEL_27;
            goto LABEL_49;
          case 1uLL:
            if ( *(_BYTE *)(v27 + 31) != 35 )
              goto LABEL_49;
            v35 = v27 - 1;
            v48 = 0;
            sub_1416EBAD0(&v35);
LABEL_27:
            v27 = sub_14083F7D0(a1, &v36);
            v40 = v27;
            if ( v27 )
              continue;
            goto LABEL_35;
          case 2uLL:
            v48 = 1;
            v29 = *(unsigned __int8 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v26, v25) + 16);
            v48 = 1;
            if ( !v29(HIDWORD(v27)) )
              goto LABEL_49;
            goto LABEL_27;
          case 3uLL:
            v28 = HIDWORD(v27);
            if ( HIDWORD(v27) >= 0x2B )
              LOBYTE(v28) = -1;
            if ( (_BYTE)v28 == 35 )
              goto LABEL_27;
LABEL_49:
            v46[2] = v38 + v11;
            return 1;
        }
      }
    }
LABEL_35:
    v30 = v38;
    v31 = v39;
    v11 += v38;
    v46[2] = v11;
    if ( !v30 )
      return 0;
    if ( v41 & 1 | ((v31 & 1) == 0) )
    {
      v8 = -(__int64)(v47 == 0) | v43;
      goto LABEL_38;
    }
    v8 = v43;
    if ( v22 < v43 )
    {
LABEL_38:
      v4 = v46;
      v6 = v45;
      v10 = v44;
    }
    else
    {
      v6 = v45;
      v10 = v44;
      if ( v30 == v23 )
      {
        v4 = v46;
        if ( v43 < 0 )
          v8 = -1;
        else
          v8 = 2 * v43;
      }
      else
      {
        v4 = v46;
      }
    }
  }
  v32 = 2 * v10;
  if ( v10 + 32 > (unsigned __int64)(2 * v10) )
    v32 = v10 + 32;
  v33 = v4;
  sub_14193A5B0((unsigned int)&v36, v10, v4[1], v32, 1, 1);
  if ( (_DWORD)v36 != 1 )
  {
    v33[1] = v37;
    *v33 = v32;
    v10 = v32;
    v8 = v43;
    v4 = v33;
    goto LABEL_20;
  }
  return 1;
}
