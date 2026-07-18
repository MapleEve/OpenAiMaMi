// mac 1.2.2 NEW codexmate_lib4core12debug_bundle13catalog_shape 0x1004f9120 d=1
__int64 *__fastcall alloc::collections::btree::set::BTreeSet$LT$T$C$A$GT$::difference::hf06b14a82a143b68(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // r11
  unsigned __int64 v20; // r12
  __int64 v21; // r8
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  const void *v35; // rdi
  size_t v36; // rax
  size_t v37; // rdx
  __int64 v38; // r12
  int v39; // eax
  const void *v40; // rsi
  size_t v41; // rdx
  size_t v42; // r15
  bool v43; // cf
  __int64 v44; // r15
  int v45; // eax
  unsigned __int64 v46; // r8
  __int64 v47; // r12
  unsigned __int64 v48; // rcx
  __int64 v49; // r9
  unsigned __int64 v50; // r11
  __int64 v51; // rax
  __int64 v52; // r10
  __int64 v53; // r8
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v61; // rcx
  __int64 v62; // r9
  unsigned __int64 v63; // rax
  __int64 v64; // r9
  __int64 v65; // r10
  char v66; // r11
  unsigned __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r11
  __int64 v70; // [rsp+8h] [rbp-98h]
  __int64 v72; // [rsp+18h] [rbp-88h] BYREF
  __int64 v73; // [rsp+20h] [rbp-80h]
  __int64 v74; // [rsp+28h] [rbp-78h]
  unsigned __int64 v75; // [rsp+30h] [rbp-70h]
  __int64 v76; // [rsp+38h] [rbp-68h]
  __int64 v77; // [rsp+40h] [rbp-60h]
  unsigned __int64 v78; // [rsp+48h] [rbp-58h]
  unsigned __int64 v79; // [rsp+50h] [rbp-50h]
  unsigned __int64 v80; // [rsp+58h] [rbp-48h]
  __int64 *v81; // [rsp+60h] [rbp-40h]
  __int64 v82; // [rsp+68h] [rbp-38h]
  __int64 *v83; // [rsp+70h] [rbp-30h]

  v3 = *a2; /*0x1004f9131*/
  v4 = a2[1]; /*0x1004f9134*/
  if ( !*a2 ) /*0x1004f913b*/
    goto LABEL_57; /*0x1004f913b*/
  if ( v4 ) /*0x1004f9144*/
  {
    if ( (v4 & 7) != 0 ) /*0x1004f9151*/
    {
      v5 = 0; /*0x1004f9157*/
      v6 = *a2; /*0x1004f915a*/
      do /*0x1004f916d*/
      {
        v6 = *(_QWORD *)(v6 + 280); /*0x1004f9160*/
        ++v5; /*0x1004f9167*/
      }
      while ( (a2[1] & 7) != v5 ); /*0x1004f916d*/
      v7 = v4 - v5; /*0x1004f9172*/
      if ( v4 < 8 ) /*0x1004f9179*/
      {
LABEL_8:
        if ( !*(_WORD *)(v6 + 274) ) /*0x1004f91c6*/
          goto LABEL_57; /*0x1004f91c6*/
        if ( (v4 & 7) != 0 ) /*0x1004f91d3*/
        {
          v8 = 0; /*0x1004f91d5*/
          v9 = *a2; /*0x1004f91d8*/
          do /*0x1004f91f6*/
          {
            v9 = *(_QWORD *)(v9 + 8LL * *(unsigned __int16 *)(v9 + 274) + 280); /*0x1004f91e8*/
            ++v8; /*0x1004f91f0*/
          }
          while ( (a2[1] & 7) != v8 ); /*0x1004f91f6*/
          v10 = v4 - v8; /*0x1004f91fb*/
          if ( v4 < 8 ) /*0x1004f9202*/
            goto LABEL_20; /*0x1004f9202*/
        }
        else
        {
          v9 = *a2; /*0x1004f9235*/
          v10 = a2[1]; /*0x1004f9238*/
          if ( v4 < 8 ) /*0x1004f923f*/
            goto LABEL_20; /*0x1004f923f*/
        }
        do /*0x1004f92d4*/
        {
          v11 = *(_QWORD *)(v9 + 8LL * *(unsigned __int16 *)(v9 + 274) + 280); /*0x1004f9258*/
          v12 = *(_QWORD *)(v11 + 8LL * *(unsigned __int16 *)(v11 + 274) + 280); /*0x1004f9268*/
          v13 = *(_QWORD *)(v12 + 8LL * *(unsigned __int16 *)(v12 + 274) + 280); /*0x1004f9278*/
          v14 = *(_QWORD *)(v13 + 8LL * *(unsigned __int16 *)(v13 + 274) + 280); /*0x1004f9288*/
          v15 = *(_QWORD *)(v14 + 8LL * *(unsigned __int16 *)(v14 + 274) + 280); /*0x1004f9298*/
          v16 = *(_QWORD *)(v15 + 8LL * *(unsigned __int16 *)(v15 + 274) + 280); /*0x1004f92a8*/
          v17 = *(_QWORD *)(v16 + 8LL * *(unsigned __int16 *)(v16 + 274) + 280); /*0x1004f92b8*/
          v9 = *(_QWORD *)(v17 + 8LL * *(unsigned __int16 *)(v17 + 274) + 280); /*0x1004f92c8*/
          v10 -= 8; /*0x1004f92d0*/
        }
        while ( v10 ); /*0x1004f92d4*/
        goto LABEL_20; /*0x1004f92d4*/
      }
    }
    else
    {
      v6 = *a2; /*0x1004f9223*/
      v7 = a2[1]; /*0x1004f9226*/
      if ( v4 < 8 ) /*0x1004f922d*/
        goto LABEL_8; /*0x1004f922d*/
    }
    do /*0x1004f91bc*/
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 280) /*0x1004f91b1*/
                                                                                             + 280LL)
                                                                                 + 280LL)
                                                                     + 280LL)
                                                         + 280LL)
                                             + 280LL)
                                 + 280LL)
                     + 280LL);
      v7 -= 8; /*0x1004f91b8*/
    }
    while ( v7 ); /*0x1004f91bc*/
    goto LABEL_8; /*0x1004f91bc*/
  }
  v6 = *a2; /*0x1004f9212*/
  v9 = *a2; /*0x1004f9215*/
  if ( !*(_WORD *)(v3 + 274) ) /*0x1004f9209*/
    goto LABEL_57; /*0x1004f9218*/
LABEL_20:
  if ( !*(_WORD *)(v9 + 274) ) /*0x1004f92da*/
    goto LABEL_57; /*0x1004f92da*/
  v18 = v9 + 24LL * *(unsigned __int16 *)(v9 + 274) - 16; /*0x1004f92f3*/
  if ( v9 + 24LL * *(unsigned __int16 *)(v9 + 274) == 16 ) /*0x1004f92f7*/
    goto LABEL_57; /*0x1004f92f7*/
  v19 = *a3; /*0x1004f92fd*/
  if ( !*a3 ) /*0x1004f92fd*/
    goto LABEL_57; /*0x1004f9303*/
  v20 = a3[1]; /*0x1004f9309*/
  if ( v20 ) /*0x1004f9310*/
  {
    if ( (v20 & 7) != 0 ) /*0x1004f931d*/
    {
      v21 = 0; /*0x1004f9323*/
      v22 = *a3; /*0x1004f9326*/
      do /*0x1004f933d*/
      {
        v22 = *(_QWORD *)(v22 + 280); /*0x1004f9330*/
        ++v21; /*0x1004f9337*/
      }
      while ( (a3[1] & 7) != v21 ); /*0x1004f933d*/
      v23 = v20 - v21; /*0x1004f9342*/
      if ( v20 < 8 ) /*0x1004f9349*/
        goto LABEL_29; /*0x1004f9349*/
    }
    else
    {
      v22 = *a3; /*0x1004f93ea*/
      v23 = a3[1]; /*0x1004f93ed*/
      if ( v20 < 8 ) /*0x1004f93f4*/
      {
LABEL_29:
        if ( !*(_WORD *)(v22 + 274) ) /*0x1004f9397*/
          goto LABEL_57; /*0x1004f9397*/
        if ( (v20 & 7) != 0 ) /*0x1004f93a4*/
        {
          v24 = 0; /*0x1004f93a6*/
          v25 = *a3; /*0x1004f93a9*/
          do /*0x1004f93c6*/
          {
            v25 = *(_QWORD *)(v25 + 8LL * *(unsigned __int16 *)(v25 + 274) + 280); /*0x1004f93b8*/
            ++v24; /*0x1004f93c0*/
          }
          while ( (a3[1] & 7) != v24 ); /*0x1004f93c6*/
          v26 = v20 - v24; /*0x1004f93cb*/
        }
        else
        {
          v25 = *a3; /*0x1004f93fc*/
          v26 = a3[1]; /*0x1004f93ff*/
        }
        if ( v20 >= 8 ) /*0x1004f9406*/
        {
          do /*0x1004f9494*/
          {
            v27 = *(_QWORD *)(v25 + 8LL * *(unsigned __int16 *)(v25 + 274) + 280); /*0x1004f9418*/
            v28 = *(_QWORD *)(v27 + 8LL * *(unsigned __int16 *)(v27 + 274) + 280); /*0x1004f9428*/
            v29 = *(_QWORD *)(v28 + 8LL * *(unsigned __int16 *)(v28 + 274) + 280); /*0x1004f9438*/
            v30 = *(_QWORD *)(v29 + 8LL * *(unsigned __int16 *)(v29 + 274) + 280); /*0x1004f9448*/
            v31 = *(_QWORD *)(v30 + 8LL * *(unsigned __int16 *)(v30 + 274) + 280); /*0x1004f9458*/
            v32 = *(_QWORD *)(v31 + 8LL * *(unsigned __int16 *)(v31 + 274) + 280); /*0x1004f9468*/
            v33 = *(_QWORD *)(v32 + 8LL * *(unsigned __int16 *)(v32 + 274) + 280); /*0x1004f9478*/
            v25 = *(_QWORD *)(v33 + 8LL * *(unsigned __int16 *)(v33 + 274) + 280); /*0x1004f9488*/
            v26 -= 8; /*0x1004f9490*/
          }
          while ( v26 ); /*0x1004f9494*/
        }
        goto LABEL_41; /*0x1004f9494*/
      }
    }
    do /*0x1004f938c*/
    {
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 280) /*0x1004f9381*/
                                                                                              + 280LL)
                                                                                  + 280LL)
                                                                      + 280LL)
                                                          + 280LL)
                                              + 280LL)
                                  + 280LL)
                      + 280LL);
      v23 -= 8; /*0x1004f9388*/
    }
    while ( v23 ); /*0x1004f938c*/
    goto LABEL_29; /*0x1004f938c*/
  }
  v22 = *a3; /*0x1004f93d9*/
  v25 = *a3; /*0x1004f93dc*/
  if ( !*(_WORD *)(v19 + 274) ) /*0x1004f93d0*/
    goto LABEL_57; /*0x1004f93df*/
LABEL_41:
  if ( *(_WORD *)(v25 + 274) ) /*0x1004f949a*/
  {
    v34 = v25 + 24LL * *(unsigned __int16 *)(v25 + 274) - 16; /*0x1004f94b3*/
    if ( v34 ) /*0x1004f94b7*/
    {
      v82 = a3[1]; /*0x1004f94bd*/
      v70 = v19; /*0x1004f94c1*/
      v81 = a2; /*0x1004f94c8*/
      v83 = a1; /*0x1004f94d3*/
      v35 = *(const void **)(v6 + 16); /*0x1004f94d7*/
      v36 = *(_QWORD *)(v6 + 24); /*0x1004f94db*/
      v37 = *(_QWORD *)(v34 + 16); /*0x1004f94e3*/
      v38 = v36 - v37; /*0x1004f94ea*/
      if ( v36 < v37 ) /*0x1004f94ed*/
        v37 = v36; /*0x1004f94ed*/
      v39 = memcmp(v35, *(const void **)(v34 + 8), v37); /*0x1004f94f1*/
      if ( v39 ) /*0x1004f94fa*/
        v38 = v39; /*0x1004f94fa*/
      v40 = *(const void **)(v22 + 16); /*0x1004f9506*/
      v41 = *(_QWORD *)(v22 + 24); /*0x1004f950a*/
      v42 = *(_QWORD *)(v18 + 16); /*0x1004f950e*/
      v43 = v42 < v41; /*0x1004f9511*/
      v44 = v42 - v41; /*0x1004f9511*/
      if ( v43 ) /*0x1004f9514*/
        v41 = *(_QWORD *)(v18 + 16); /*0x1004f9514*/
      v45 = memcmp(*(const void **)(v18 + 8), v40, v41); /*0x1004f9518*/
      if ( v45 ) /*0x1004f9521*/
        v44 = v45; /*0x1004f9521*/
      if ( v38 > 0 || v44 < 0 ) /*0x1004f9531*/
      {
        v48 = v81[2]; /*0x1004f9609*/
        v55 = 3; /*0x1004f960d*/
        v51 = 1; /*0x1004f9612*/
        v53 = 0; /*0x1004f9617*/
        v52 = 1; /*0x1004f961a*/
        v50 = v3; /*0x1004f9620*/
        v54 = 0; /*0x1004f9623*/
        v49 = v4; /*0x1004f9625*/
        a1 = v83; /*0x1004f9628*/
        v47 = v82; /*0x1004f962c*/
      }
      else if ( v38 ) /*0x1004f953e*/
      {
        a1 = v83; /*0x1004f9547*/
        v47 = v82; /*0x1004f954b*/
        if ( v44 ) /*0x1004f954f*/
        {
          v48 = v81[2]; /*0x1004f9555*/
          v18 = (__int64)a3; /*0x1004f9559*/
          v44 = a3[2]; /*0x1004f9560*/
          if ( v48 <= (unsigned __int64)v44 >> 4 ) /*0x1004f956e*/
          {
            v55 = 2; /*0x1004f976a*/
            v51 = 1; /*0x1004f976f*/
            v53 = 0; /*0x1004f9774*/
            v52 = 1; /*0x1004f9777*/
            v50 = v3; /*0x1004f977d*/
            v54 = 0; /*0x1004f9780*/
            v49 = v4; /*0x1004f9782*/
          }
          else
          {
            v49 = 1; /*0x1004f9574*/
            v50 = v4; /*0x1004f957a*/
            v51 = 0; /*0x1004f957d*/
            v52 = 0; /*0x1004f957f*/
            v53 = v3; /*0x1004f9582*/
            v4 = v81[2]; /*0x1004f9585*/
            v54 = v3; /*0x1004f9588*/
            v3 = v50; /*0x1004f958b*/
            v48 = 1; /*0x1004f958e*/
            v18 = 0; /*0x1004f9593*/
            v55 = 1; /*0x1004f9596*/
          }
        }
        else
        {
          v63 = v81[2]; /*0x1004f96ee*/
          v72 = 1; /*0x1004f96f2*/
          v73 = 0; /*0x1004f96fd*/
          v74 = v3; /*0x1004f9705*/
          v75 = v4; /*0x1004f9709*/
          v76 = 1; /*0x1004f970d*/
          v77 = 0; /*0x1004f9715*/
          v78 = v3; /*0x1004f971d*/
          v79 = v4; /*0x1004f9721*/
          v80 = v63; /*0x1004f9725*/
          _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hddd1f43ed85b0c29(&v72); /*0x1004f9730*/
          a1 = v83; /*0x1004f9735*/
          v51 = v72; /*0x1004f9739*/
          v54 = v73; /*0x1004f9740*/
          v3 = v74; /*0x1004f9744*/
          v49 = v75; /*0x1004f9748*/
          v52 = v76; /*0x1004f974c*/
          v53 = v77; /*0x1004f9750*/
          v50 = v78; /*0x1004f9754*/
          v4 = v79; /*0x1004f9758*/
          v48 = v80; /*0x1004f975c*/
          v55 = 3; /*0x1004f9760*/
        }
      }
      else
      {
        v61 = v81[2]; /*0x1004f9696*/
        v55 = 3; /*0x1004f969a*/
        v51 = 1; /*0x1004f969f*/
        a1 = v83; /*0x1004f96a7*/
        v47 = v82; /*0x1004f96ab*/
        if ( v61 ) /*0x1004f96af*/
        {
          v54 = v3; /*0x1004f96b5*/
          if ( v4 ) /*0x1004f96bb*/
          {
            if ( (v4 & 7) != 0 ) /*0x1004f96c8*/
            {
              v62 = 0; /*0x1004f96ce*/
              v54 = v3; /*0x1004f96d1*/
              do /*0x1004f96e1*/
              {
                v54 = *(_QWORD *)(v54 + 280); /*0x1004f96d4*/
                ++v62; /*0x1004f96db*/
              }
              while ( (v4 & 7) != v62 ); /*0x1004f96e1*/
              v46 = v4 - v62; /*0x1004f96e6*/
            }
            else
            {
              v54 = v3; /*0x1004f97a2*/
              v46 = v4; /*0x1004f97a5*/
            }
            if ( v4 >= 8 ) /*0x1004f97ac*/
            {
              do /*0x1004f97ea*/
              {
                v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 + 280) + 280LL) /*0x1004f97df*/
                                                                                            + 280LL)
                                                                                + 280LL)
                                                                    + 280LL)
                                                        + 280LL)
                                            + 280LL)
                                + 280LL);
                v46 -= 8LL; /*0x1004f97e6*/
              }
              while ( v46 ); /*0x1004f97ea*/
            }
          }
          v48 = v61 - 1; /*0x1004f97ec*/
          if ( *(_WORD *)(v54 + 274) ) /*0x1004f97ef*/
          {
            v64 = 0; /*0x1004f97f9*/
          }
          else
          {
            LOBYTE(v46) = 1; /*0x1004f97fe*/
            v65 = 0; /*0x1004f9801*/
            do /*0x1004f982d*/
            {
              v44 = *(_QWORD *)v54; /*0x1004f9804*/
              if ( !*(_QWORD *)v54 ) /*0x1004f980a*/
                core::option::unwrap_failed::h44626cade04bbf1e(&anon_df65db1ba7ce9569a15dc8c2d6b586ae_806); /*0x1004f98ec*/
              v66 = v46; /*0x1004f9810*/
              ++v65; /*0x1004f9813*/
              v64 = *(unsigned __int16 *)(v54 + 272); /*0x1004f9816*/
              LODWORD(v46) = v46 + 1; /*0x1004f981e*/
              v54 = *(_QWORD *)v54; /*0x1004f9822*/
            }
            while ( (unsigned __int16)v64 >= *(_WORD *)(v44 + 274) ); /*0x1004f982d*/
            v67 = v65 - 1; /*0x1004f9832*/
            if ( v65 ) /*0x1004f9836*/
            {
              v68 = v44 + 8 * v64 + 288; /*0x1004f9852*/
              if ( (v65 & 7) != 0 ) /*0x1004f985e*/
              {
                v69 = v66 & 7; /*0x1004f9864*/
                v44 = 0; /*0x1004f9868*/
                do /*0x1004f987b*/
                {
                  v54 = *(_QWORD *)v68; /*0x1004f986b*/
                  v68 = *(_QWORD *)v68 + 280LL; /*0x1004f986e*/
                  ++v44; /*0x1004f9875*/
                }
                while ( v69 != v44 ); /*0x1004f987b*/
                v65 -= v44; /*0x1004f987d*/
              }
              if ( v67 >= 7 ) /*0x1004f9886*/
              {
                v53 = 0; /*0x1004f988d*/
                do /*0x1004f98cf*/
                {
                  v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68 + 280LL) /*0x1004f98bd*/
                                                                                              + 280LL)
                                                                                  + 280LL)
                                                                      + 280LL)
                                                          + 280LL)
                                              + 280LL)
                                  + 280LL);
                  v68 = v54 + 280; /*0x1004f98c4*/
                  v65 -= 8; /*0x1004f98cb*/
                }
                while ( v65 ); /*0x1004f98cf*/
              }
              else
              {
                v53 = 0; /*0x1004f9888*/
              }
              v52 = 1; /*0x1004f98d1*/
              v50 = v3; /*0x1004f98d7*/
              v3 = 0; /*0x1004f98da*/
              v49 = 0; /*0x1004f98dd*/
              goto LABEL_62; /*0x1004f98e0*/
            }
            v54 = v44; /*0x1004f9838*/
          }
          v49 = v64 + 1; /*0x1004f983b*/
          v53 = 0; /*0x1004f983e*/
          v52 = 1; /*0x1004f9841*/
          v50 = v3; /*0x1004f9847*/
          v3 = 0; /*0x1004f984a*/
        }
        else
        {
          v53 = 0; /*0x1004f978a*/
          v52 = 1; /*0x1004f978d*/
          v50 = v3; /*0x1004f9793*/
          v54 = 0; /*0x1004f9796*/
          v49 = v4; /*0x1004f9798*/
          v48 = 0; /*0x1004f979b*/
        }
      }
LABEL_62:
      *a1 = v55; /*0x1004f9630*/
      a1[1] = v51; /*0x1004f9633*/
      a1[2] = v54; /*0x1004f9637*/
      a1[3] = v3; /*0x1004f963b*/
      a1[4] = v49; /*0x1004f963f*/
      a1[5] = v52; /*0x1004f9643*/
      a1[6] = v53; /*0x1004f9647*/
      a1[7] = v50; /*0x1004f964b*/
      a1[8] = v4; /*0x1004f964f*/
      a1[9] = v48; /*0x1004f9653*/
      a1[10] = v18; /*0x1004f9657*/
      a1[11] = v70; /*0x1004f9662*/
      a1[12] = v47; /*0x1004f9666*/
      a1[13] = 1; /*0x1004f966a*/
      a1[14] = 0; /*0x1004f9672*/
      a1[15] = v70; /*0x1004f967a*/
      a1[16] = v47; /*0x1004f967e*/
      v58 = 18; /*0x1004f9685*/
      v59 = 17; /*0x1004f968a*/
      v57 = 0; /*0x1004f968f*/
      goto LABEL_60; /*0x1004f9691*/
    }
  }
LABEL_57:
  v56 = 0; /*0x1004f95a0*/
  v57 = *a2; /*0x1004f95a2*/
  if ( v3 ) /*0x1004f95ab*/
    v57 = a2[2]; /*0x1004f95ad*/
  LOBYTE(v56) = v3 != 0; /*0x1004f95b1*/
  *a1 = 3; /*0x1004f95b3*/
  a1[1] = v56; /*0x1004f95ba*/
  a1[2] = 0; /*0x1004f95be*/
  a1[3] = v3; /*0x1004f95c6*/
  a1[4] = v4; /*0x1004f95ca*/
  a1[5] = v56; /*0x1004f95ce*/
  a1[6] = 0; /*0x1004f95d2*/
  a1[7] = v3; /*0x1004f95da*/
  v58 = 9; /*0x1004f95de*/
  v59 = 8; /*0x1004f95e3*/
  v44 = v4; /*0x1004f95e8*/
LABEL_60:
  a1[v59] = v44; /*0x1004f95eb*/
  a1[v58] = v57; /*0x1004f95ef*/
  return a1; /*0x1004f95f6*/
}