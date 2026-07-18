// win 1.2.1 NEW upload_debug_report 0x1402fe540 d=2
__int64 *__fastcall sub_1402FE540(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  unsigned __int64 v23; // r11
  __int64 v24; // r11
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 v28; // r15
  const __m128i *v29; // r13
  __int64 v30; // rbx
  __m128i *v31; // rax
  __int64 v32; // r15
  const __m128i *v33; // r13
  __int64 v34; // rbx
  __m128i *v35; // rax
  bool v36; // zf
  __int64 v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+30h] [rbp-50h]
  unsigned __int64 v49; // [rsp+38h] [rbp-48h]
  unsigned __int64 v50; // [rsp+40h] [rbp-40h]
  __int64 v51; // [rsp+48h] [rbp-38h]
  __int64 v52; // [rsp+50h] [rbp-30h]
  unsigned __int64 v53; // [rsp+58h] [rbp-28h]
  unsigned __int64 v54; // [rsp+60h] [rbp-20h]
  __int64 v55; // [rsp+68h] [rbp-18h]
  __int64 v56; // [rsp+70h] [rbp-10h]
  __int64 v57; // [rsp+78h] [rbp-8h]
  __int64 v58; // [rsp+80h] [rbp+0h]
  const char *v59; // [rsp+88h] [rbp+8h] BYREF
  __int64 v60; // [rsp+90h] [rbp+10h]
  __int64 v61; // [rsp+98h] [rbp+18h]
  __int64 v62; // [rsp+A0h] [rbp+20h]
  const char **v63; // [rsp+A8h] [rbp+28h] BYREF
  __int64 (__fastcall *v64)(); // [rsp+B0h] [rbp+30h]
  __int64 v65; // [rsp+B8h] [rbp+38h]
  __int64 v66; // [rsp+C0h] [rbp+40h]
  __int64 v67; // [rsp+C8h] [rbp+48h]
  __int64 v68; // [rsp+D0h] [rbp+50h]
  char v69; // [rsp+DFh] [rbp+5Fh] BYREF
  __int64 v70; // [rsp+E0h] [rbp+60h]
  char v71; // [rsp+EFh] [rbp+6Fh]
  __int64 v72; // [rsp+F0h] [rbp+70h]

  v72 = -2; /*0x1402fe55b*/
  v5 = *a2; /*0x1402fe566*/
  v6 = a2[1]; /*0x1402fe569*/
  v7 = 0; /*0x1402fe56d*/
  v8 = a2[2]; /*0x1402fe573*/
  if ( !*a2 ) /*0x1402fe566*/
    v8 = 0; /*0x1402fe577*/
  LOBYTE(v7) = *a2 != 0; /*0x1402fe57b*/
  v47 = v7; /*0x1402fe57f*/
  v48 = 0; /*0x1402fe583*/
  v49 = v5; /*0x1402fe58b*/
  v50 = v6; /*0x1402fe58f*/
  v51 = v7; /*0x1402fe593*/
  v52 = 0; /*0x1402fe597*/
  v53 = v5; /*0x1402fe59f*/
  v54 = v6; /*0x1402fe5a3*/
  v55 = v8; /*0x1402fe5a7*/
  v56 = 0; /*0x1402fe5ab*/
  v66 = -1; /*0x1402fe5b3*/
  v65 = -1; /*0x1402fe5bb*/
  v9 = -1; /*0x1402fe5c3*/
  while ( 2 ) /*0x1402fe5ca*/
  {
    v58 = v2; /*0x1402fe5ca*/
    v10 = v3; /*0x1402fe5ce*/
LABEL_5:
    v3 = v10; /*0x1402fe5d1*/
    v11 = v65; /*0x1402fe5d4*/
    v12 = v66; /*0x1402fe5d8*/
LABEL_6:
    v13 = v47; /*0x1402fe5dc*/
    v14 = v48; /*0x1402fe5e0*/
    v15 = v50; /*0x1402fe5e4*/
    while ( 1 ) /*0x1402fe61c*/
    {
      if ( !v8 ) /*0x1402fe61f*/
      {
        v36 = v11 == -1; /*0x1402fe9d2*/
        if ( v11 == -1 ) /*0x1402fe9d6*/
          v11 = 0; /*0x1402fe9d6*/
        v37 = 1; /*0x1402fe9da*/
        if ( !v36 ) /*0x1402fe9df*/
          v37 = v3; /*0x1402fe9df*/
        v38 = v61; /*0x1402fe9e6*/
        if ( v36 ) /*0x1402fe9ea*/
          v38 = 0; /*0x1402fe9ea*/
        if ( v12 == -1 ) /*0x1402fe9f2*/
        {
          LOBYTE(v66) = v36; /*0x1402fea02*/
          nullsub_1(); /*0x1402fea05*/
          v12 = 6; /*0x1402fea0a*/
          v42 = sub_140001350(6, 1); /*0x1402fea1a*/
          if ( !v42 ) /*0x1402fea22*/
          {
            v61 = v37; /*0x1402fecb3*/
            v62 = v11; /*0x1402fecb7*/
            v70 = v3; /*0x1402fecbb*/
            sub_1415F08AB(1, 6); /*0x1402fecc9*/
          }
          *(_WORD *)(v42 + 4) = 27745; /*0x1402fea28*/
          *(_DWORD *)v42 = 1970168173; /*0x1402fea2e*/
          v39 = v42; /*0x1402fea34*/
          v41 = 6; /*0x1402fea37*/
          v40 = v62; /*0x1402fea3d*/
        }
        else
        {
          v39 = v58; /*0x1402fe9f4*/
          v40 = v62; /*0x1402fe9f8*/
          v41 = v57; /*0x1402fe9fc*/
        }
        v43 = 0; /*0x1402fea41*/
        if ( v9 != -1 ) /*0x1402fea47*/
          v43 = v9; /*0x1402fea47*/
        a1[2] = v11; /*0x1402fea4b*/
        a1[3] = v37; /*0x1402fea4f*/
        a1[4] = v38; /*0x1402fea53*/
        *a1 = v43; /*0x1402fea57*/
        a1[1] = v40; /*0x1402fea5a*/
        a1[5] = v12; /*0x1402fea5e*/
        a1[6] = v39; /*0x1402fea62*/
        a1[7] = v41; /*0x1402fea66*/
        return a1; /*0x1402fea66*/
      }
      v55 = --v8; /*0x1402fe628*/
      if ( v13 != 1 ) /*0x1402fe630*/
      {
        v70 = v3; /*0x1402fec94*/
        v68 = v12; /*0x1402fec98*/
        v67 = v11; /*0x1402fec9c*/
        v71 = 1; /*0x1402feca0*/
        sub_1415F0BA0(&off_14168F4D0); /*0x1402fecab*/
      }
      if ( v14 ) /*0x1402fe639*/
      {
        v16 = v49; /*0x1402fe63b*/
        if ( v15 < *(unsigned __int16 *)(v14 + 626) ) /*0x1402fe649*/
          goto LABEL_13; /*0x1402fe649*/
        goto LABEL_21; /*0x1402fe649*/
      }
      v14 = v49; /*0x1402fe660*/
      if ( v15 ) /*0x1402fe667*/
      {
        if ( (v15 & 7) == 0 ) /*0x1402fe670*/
        {
          v20 = v15; /*0x1402fe852*/
          if ( v15 < 8 ) /*0x1402fe859*/
            goto LABEL_20; /*0x1402fe859*/
          do /*0x1402fe6dc*/
          {
LABEL_19:
            v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 632) + 632LL) /*0x1402fe6a0*/
                                                                                        + 632LL)
                                                                            + 632LL)
                                                                + 632LL)
                                                    + 632LL)
                                        + 632LL)
                            + 632LL);
            v20 -= 8LL; /*0x1402fe6d8*/
          }
          while ( v20 ); /*0x1402fe6dc*/
          goto LABEL_20; /*0x1402fe6dc*/
        }
        v19 = 0; /*0x1402fe676*/
        do /*0x1402fe68d*/
        {
          v14 = *(_QWORD *)(v14 + 632); /*0x1402fe680*/
          ++v19; /*0x1402fe687*/
        }
        while ( (v15 & 7) != v19 ); /*0x1402fe68d*/
        v20 = v15 - v19; /*0x1402fe692*/
        if ( v15 >= 8 ) /*0x1402fe699*/
          goto LABEL_19; /*0x1402fe699*/
      }
LABEL_20:
      v47 = 1; /*0x1402fe6de*/
      v13 = 1; /*0x1402fe6e6*/
      v15 = 0; /*0x1402fe6eb*/
      v16 = 0; /*0x1402fe6ee*/
      if ( *(_WORD *)(v14 + 626) ) /*0x1402fe6f1*/
      {
LABEL_13:
        v17 = v14; /*0x1402fe64f*/
        v18 = v15; /*0x1402fe652*/
        goto LABEL_23; /*0x1402fe655*/
      }
      do /*0x1402fe735*/
      {
LABEL_21:
        v17 = *(_QWORD *)(v14 + 352); /*0x1402fe710*/
        if ( !v17 ) /*0x1402fe71a*/
          sub_1415F0BA0(&off_14168D418); /*0x1402feb27*/
        ++v16; /*0x1402fe720*/
        v18 = *(unsigned __int16 *)(v14 + 624); /*0x1402fe723*/
        v14 = *(_QWORD *)(v14 + 352); /*0x1402fe72a*/
      }
      while ( (unsigned __int16)v18 >= *(_WORD *)(v17 + 626) ); /*0x1402fe735*/
LABEL_23:
      if ( v16 ) /*0x1402fe73a*/
      {
        v21 = v17 + 8 * v18 + 640; /*0x1402fe744*/
        if ( (v16 & 7) != 0 ) /*0x1402fe752*/
        {
          v22 = 0; /*0x1402fe758*/
          do /*0x1402fe770*/
          {
            v14 = *(_QWORD *)v21; /*0x1402fe760*/
            v21 = *(_QWORD *)v21 + 632LL; /*0x1402fe763*/
            ++v22; /*0x1402fe76a*/
          }
          while ( (v16 & 7) != v22 ); /*0x1402fe770*/
          v23 = v16 - v22; /*0x1402fe775*/
          if ( v16 < 8 ) /*0x1402fe77c*/
            goto LABEL_29; /*0x1402fe77c*/
        }
        else
        {
          v23 = v16; /*0x1402fe840*/
          if ( v16 < 8 ) /*0x1402fe847*/
          {
LABEL_29:
            v15 = 0; /*0x1402fe7c1*/
            goto LABEL_31; /*0x1402fe7c4*/
          }
        }
        do /*0x1402fe7bf*/
        {
          v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 /*0x1402fe7ad*/
                                                                                                  + 632LL)
                                                                                      + 632LL)
                                                                          + 632LL)
                                                              + 632LL)
                                                  + 632LL)
                                      + 632LL)
                          + 632LL);
          v21 = v14 + 632; /*0x1402fe7b4*/
          v23 -= 8LL; /*0x1402fe7bb*/
        }
        while ( v23 ); /*0x1402fe7bf*/
        goto LABEL_29; /*0x1402fe7bf*/
      }
      v15 = v18 + 1; /*0x1402fe7d0*/
      v14 = v17; /*0x1402fe7d4*/
LABEL_31:
      v24 = 3 * v18; /*0x1402fe7d7*/
      v25 = v17 + 32 * v18; /*0x1402fe7df*/
      v48 = v14; /*0x1402fe7e2*/
      v49 = 0; /*0x1402fe7e6*/
      v50 = v15; /*0x1402fe7ee*/
      v56 = v25; /*0x1402fe7f2*/
      v26 = *(_QWORD *)(v17 + 8 * v24 + 368); /*0x1402fe7f6*/
      v27 = *(_QWORD *)(v17 + 8 * v24 + 376); /*0x1402fe7fe*/
      if ( v27 == 10 ) /*0x1402fe80a*/
      {
        if ( !(*(_QWORD *)v26 ^ 0x6B63616264656566LL | *(_WORD *)(v26 + 8) ^ 0x6449u) ) /*0x1402fe60e*/
        {
          v70 = v3; /*0x1402fe864*/
          if ( v9 != -1 ) /*0x1402fe86c*/
          {
            v59 = aFeedbackid; /*0x1402feb39*/
            v60 = 10; /*0x1402feb3d*/
            v63 = &v59; /*0x1402feb49*/
            v64 = sub_1401F8E10; /*0x1402feb54*/
            v68 = v12; /*0x1402feb58*/
            v67 = v11; /*0x1402feb5c*/
            v71 = 1; /*0x1402feb60*/
            v45 = sub_1415C14C0(&unk_14166736C, &v63); /*0x1402feb6f*/
            goto LABEL_74; /*0x1402feb75*/
          }
          v68 = v12; /*0x1402fe872*/
          v67 = v11; /*0x1402fe876*/
          v71 = 1; /*0x1402fe87a*/
          sub_140A551B0(&v63, &v47); /*0x1402fe886*/
          v9 = (__int64)v63; /*0x1402fe88c*/
          if ( v63 == (const char **)-1LL ) /*0x1402fe894*/
          {
            v45 = (__int64)v64; /*0x1402fead7*/
LABEL_74:
            v46 = v70; /*0x1402feadb*/
            a1[1] = v45; /*0x1402feadf*/
            *a1 = -1; /*0x1402feae3*/
            if ( v12 <= 0 ) /*0x1402feaed*/
              goto LABEL_76; /*0x1402feaed*/
LABEL_75:
            sub_140001360(v58, v12, 1); /*0x1402feaef*/
            goto LABEL_76; /*0x1402feafc*/
          }
          v62 = (__int64)v64; /*0x1402fe89e*/
          v8 = v55; /*0x1402fe8a2*/
          v3 = v70; /*0x1402fe8a6*/
          goto LABEL_6; /*0x1402fe8aa*/
        }
        goto LABEL_8; /*0x1402fe60e*/
      }
      if ( v27 == 8 ) /*0x1402fe814*/
      {
        if ( *(_QWORD *)v26 == 0x65746F4E72657375LL ) /*0x1402fe824*/
        {
          if ( v11 != -1 ) /*0x1402fe8b3*/
          {
            v70 = v3; /*0x1402feb7a*/
            v59 = aUsernote; /*0x1402feb85*/
            v60 = 8; /*0x1402feb89*/
            v63 = &v59; /*0x1402feb95*/
            v64 = sub_1401F8E10; /*0x1402feba0*/
            v68 = v12; /*0x1402feba4*/
            v67 = v11; /*0x1402feba8*/
            v71 = 1; /*0x1402febac*/
            v45 = sub_1415C14C0(&unk_14166736C, &v63); /*0x1402febbb*/
            goto LABEL_74; /*0x1402febc1*/
          }
          v56 = 0; /*0x1402fe8b9*/
          if ( *(_BYTE *)v25 != 3 ) /*0x1402fe8c4*/
          {
            v70 = v3; /*0x1402febc6*/
            v68 = v12; /*0x1402febca*/
            v67 = -1; /*0x1402febce*/
            v71 = 1; /*0x1402febd6*/
            v45 = sub_1415CA890(v25, (__int64)&v69, (__int64)&unk_1416C7348); /*0x1402febe5*/
            v11 = -1; /*0x1402febeb*/
            goto LABEL_74; /*0x1402febf2*/
          }
          v28 = *(_QWORD *)(v25 + 24); /*0x1402fe8ca*/
          if ( v28 < 0 ) /*0x1402fe8d1*/
          {
            v70 = v3; /*0x1402fea81*/
            v30 = 0; /*0x1402fea85*/
LABEL_70:
            v68 = v66; /*0x1402fea87*/
            v67 = -1; /*0x1402fea8f*/
            v71 = 1; /*0x1402fea97*/
            sub_1415F08AB(v30, v28); /*0x1402feaa1*/
          }
          v10 = 1; /*0x1402fe8d7*/
          v61 = 0; /*0x1402fe8e2*/
          v65 = 0; /*0x1402fe8eb*/
          if ( v28 ) /*0x1402fe8ef*/
          {
            v70 = v3; /*0x1402fe8f5*/
            v29 = *(const __m128i **)(v25 + 16); /*0x1402fe8f9*/
            nullsub_1(); /*0x1402fe8fd*/
            v30 = 1; /*0x1402fe902*/
            v31 = (__m128i *)sub_140001350(v28, 1); /*0x1402fe90f*/
            if ( !v31 ) /*0x1402fe917*/
              goto LABEL_70; /*0x1402fe917*/
            v10 = (__int64)v31; /*0x1402fe91d*/
            sub_1415B2FE0(v31, v29, v28); /*0x1402fe929*/
            v61 = v28; /*0x1402fe92e*/
            v65 = v28; /*0x1402fe932*/
          }
          goto LABEL_5; /*0x1402fe936*/
        }
        if ( *(_QWORD *)v26 == 0x79726F6765746163LL ) /*0x1402fe834*/
          break; /*0x1402fe834*/
      }
LABEL_8:
      v56 = 0; /*0x1402fe614*/
    }
    if ( v12 != -1 ) /*0x1402fe944*/
    {
      v70 = v3; /*0x1402febf7*/
      v59 = aCategory; /*0x1402fec02*/
      v60 = 8; /*0x1402fec06*/
      v63 = &v59; /*0x1402fec12*/
      v64 = sub_1401F8E10; /*0x1402fec1d*/
      v68 = v12; /*0x1402fec21*/
      v67 = v11; /*0x1402fec25*/
      v71 = 1; /*0x1402fec29*/
      a1[1] = sub_1415C14C0(&unk_14166736C, &v63); /*0x1402fec3e*/
      *a1 = -1; /*0x1402fec42*/
      v46 = v70; /*0x1402fec4c*/
      if ( !v12 ) /*0x1402fec50*/
        goto LABEL_76; /*0x1402fec50*/
      goto LABEL_75; /*0x1402fec50*/
    }
    v56 = 0; /*0x1402fe94a*/
    if ( *(_BYTE *)v25 == 3 ) /*0x1402fe955*/
    {
      v32 = *(_QWORD *)(v25 + 24); /*0x1402fe95b*/
      if ( v32 < 0 ) /*0x1402fe962*/
      {
        v70 = v3; /*0x1402feaac*/
        v34 = 0; /*0x1402feab0*/
      }
      else
      {
        v2 = 1; /*0x1402fe968*/
        v57 = 0; /*0x1402fe973*/
        v66 = 0; /*0x1402fe97c*/
        if ( !v32 ) /*0x1402fe980*/
          continue; /*0x1402fe980*/
        v70 = v3; /*0x1402fe986*/
        v33 = *(const __m128i **)(v25 + 16); /*0x1402fe98a*/
        nullsub_1(); /*0x1402fe98e*/
        v34 = 1; /*0x1402fe993*/
        v35 = (__m128i *)sub_140001350(v32, 1); /*0x1402fe9a0*/
        if ( v35 ) /*0x1402fe9a8*/
        {
          v2 = (__int64)v35; /*0x1402fe9ae*/
          sub_1415B2FE0(v35, v33, v32); /*0x1402fe9ba*/
          v57 = v32; /*0x1402fe9bf*/
          v66 = v32; /*0x1402fe9c3*/
          v3 = v70; /*0x1402fe9c7*/
          continue; /*0x1402fe9cb*/
        }
      }
      v68 = -1; /*0x1402feab2*/
      v67 = v65; /*0x1402feabe*/
      v71 = 1; /*0x1402feac2*/
      sub_1415F08AB(v34, v32); /*0x1402feacc*/
    }
    break;
  }
  v70 = v3; /*0x1402fec5b*/
  v68 = -1; /*0x1402fec5f*/
  v67 = v11; /*0x1402fec67*/
  v71 = 1; /*0x1402fec6b*/
  a1[1] = sub_1415CA890(v25, (__int64)&v69, (__int64)&unk_1416C7348); /*0x1402fec80*/
  *a1 = -1; /*0x1402fec84*/
  v46 = v70; /*0x1402fec8b*/
LABEL_76:
  if ( v11 > 0 ) /*0x1402feb04*/
    sub_140001360(v46, v11, 1); /*0x1402feb16*/
  return a1; /*0x1402fea6d*/
}