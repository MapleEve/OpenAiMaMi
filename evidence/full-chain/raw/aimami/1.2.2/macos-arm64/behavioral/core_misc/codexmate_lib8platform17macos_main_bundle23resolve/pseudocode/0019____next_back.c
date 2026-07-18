// mac 1.2.2 NEW codexmate_lib8platform17macos_main_bundle23resolve 0x101384140 d=2
_QWORD *__fastcall _$LT$std..path..Components$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h569153dcda635d84(
        _QWORD *a1,
        __int64 a2)
{
  unsigned __int8 v2; // r12
  char v3; // r15
  __int64 v4; // rax
  unsigned __int8 v5; // cl
  bool v6; // dl
  _BYTE *v7; // r9
  unsigned __int64 v8; // rsi
  char v9; // r8
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 *v13; // rdx
  unsigned __int64 *v14; // r14
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned __int64 *v20; // rdx
  unsigned __int64 *v21; // r14
  __int64 v22; // r13
  __int64 v23; // rax
  bool v24; // cf
  unsigned __int64 v25; // rsi
  unsigned __int64 v27; // [rsp+8h] [rbp-78h] BYREF
  __int64 v28; // [rsp+10h] [rbp-70h]
  __int64 v29; // [rsp+18h] [rbp-68h]
  __int64 v30; // [rsp+20h] [rbp-60h]
  __int64 v31; // [rsp+28h] [rbp-58h]
  __int64 v32; // [rsp+30h] [rbp-50h]
  __int64 v33; // [rsp+38h] [rbp-48h]
  __int64 v34; // [rsp+40h] [rbp-40h]
  _BYTE *v35; // [rsp+48h] [rbp-38h]
  _QWORD *v36; // [rsp+50h] [rbp-30h]

  v2 = *(_BYTE *)(a2 + 56); /*0x101384151*/
  v3 = 10; /*0x101384156*/
  if ( v2 == 3 ) /*0x10138415d*/
    goto LABEL_57; /*0x10138415d*/
  v4 = a2; /*0x101384163*/
  v5 = *(_BYTE *)(a2 + 57); /*0x101384166*/
  v6 = v5 == 3 || v2 > v5; /*0x101384177*/
  v7 = *(_BYTE **)a2; /*0x10138417a*/
  v8 = *(_QWORD *)(a2 + 8); /*0x10138417d*/
  v9 = *(_BYTE *)(v4 + 58); /*0x101384185*/
  if ( v2 <= 1u ) /*0x10138418e*/
  {
    if ( (v9 & 1) != 0 ) /*0x101384198*/
    {
      if ( !v6 ) /*0x1013841a0*/
      {
        v10 = v8; /*0x1013841aa*/
        while ( v5 != 1 ) /*0x1013841b0*/
        {
          if ( v5 != 2 ) /*0x1013841bc*/
            goto LABEL_64; /*0x1013841bc*/
          if ( v10 <= 1 ) /*0x1013841c6*/
          {
            *(_BYTE *)(v4 + 57) = 1; /*0x10138424c*/
            v5 = 1; /*0x101384250*/
          }
          else
          {
            v36 = a1; /*0x1013841cc*/
            v11 = v4; /*0x1013841d3*/
            std::path::Components::parse_next_component_back::h201dfb54389de00e(&v27, v4); /*0x1013841d9*/
            a1 = v36; /*0x1013841de*/
            v36[6] = v34; /*0x1013841e9*/
            a1[5] = v33; /*0x1013841f1*/
            a1[4] = v32; /*0x1013841f9*/
            a1[3] = v31; /*0x101384201*/
            a1[2] = v30; /*0x101384209*/
            v12 = v28; /*0x10138420d*/
            a1[1] = v29; /*0x101384214*/
            *a1 = v12; /*0x101384218*/
            v8 = v10 - v27; /*0x10138421b*/
            if ( v10 < v27 ) /*0x10138421f*/
              goto LABEL_63; /*0x10138421f*/
            v4 = v11; /*0x101384225*/
            *(_QWORD *)(v11 + 8) = v8; /*0x101384228*/
            v5 = 2; /*0x10138422c*/
            v10 = v8; /*0x101384231*/
            if ( *(_BYTE *)a1 != 10 ) /*0x101384238*/
              return a1; /*0x101384238*/
          }
        }
LABEL_55:
        *(_BYTE *)(v4 + 57) = 3; /*0x101384506*/
        v3 = 6; /*0x10138450a*/
        v24 = v8 == 0; /*0x10138450d*/
        v25 = v8 - 1; /*0x10138450d*/
        if ( v24 ) /*0x101384511*/
          core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v25, 0, (__int64)&off_101927190); /*0x101384586*/
LABEL_56:
        *(_QWORD *)(v4 + 8) = v25; /*0x101384513*/
        goto LABEL_57; /*0x101384513*/
      }
      goto LABEL_57; /*0x1013841a0*/
    }
    if ( v6 ) /*0x101384335*/
      goto LABEL_57; /*0x101384335*/
    v10 = v8; /*0x10138433f*/
    while ( 1 ) /*0x101384342*/
    {
      if ( v5 == 1 ) /*0x101384345*/
        goto LABEL_51; /*0x101384345*/
      if ( v5 != 2 ) /*0x101384351*/
        goto LABEL_64; /*0x101384351*/
      v17 = v10; /*0x101384357*/
      if ( v10 ) /*0x10138435d*/
      {
        if ( v10 == 1 ) /*0x101384363*/
        {
          if ( *v7 != 46 ) /*0x101384369*/
            goto LABEL_35; /*0x101384369*/
        }
        else if ( *v7 != 46 || v7[1] != 47 ) /*0x101384378*/
        {
LABEL_35:
          v17 = 0; /*0x101384381*/
          goto LABEL_36; /*0x101384381*/
        }
        v17 = 1; /*0x10138437a*/
      }
LABEL_36:
      if ( v10 <= v17 ) /*0x101384386*/
      {
        *(_BYTE *)(v4 + 57) = 1; /*0x101384414*/
        v5 = 1; /*0x101384418*/
      }
      else
      {
        v35 = v7; /*0x10138438c*/
        v36 = a1; /*0x101384390*/
        v18 = v4; /*0x101384397*/
        std::path::Components::parse_next_component_back::h201dfb54389de00e(&v27, v4); /*0x10138439d*/
        a1 = v36; /*0x1013843a2*/
        v36[6] = v34; /*0x1013843ad*/
        a1[5] = v33; /*0x1013843b5*/
        a1[4] = v32; /*0x1013843bd*/
        a1[3] = v31; /*0x1013843c5*/
        a1[2] = v30; /*0x1013843cd*/
        v19 = v28; /*0x1013843d1*/
        a1[1] = v29; /*0x1013843d8*/
        *a1 = v19; /*0x1013843dc*/
        v8 = v10 - v27; /*0x1013843df*/
        if ( v10 < v27 ) /*0x1013843e3*/
          goto LABEL_63; /*0x1013843e3*/
        v4 = v18; /*0x1013843e9*/
        *(_QWORD *)(v18 + 8) = v8; /*0x1013843ec*/
        v5 = 2; /*0x1013843f0*/
        v10 = v8; /*0x1013843f5*/
        v7 = v35; /*0x1013843f8*/
        if ( *(_BYTE *)a1 != 10 ) /*0x101384400*/
          return a1; /*0x101384400*/
      }
    }
  }
  if ( (v9 & 1) != 0 )
  {
    if ( !v6 ) /*0x10138426c*/
    {
      v13 = &v27; /*0x101384272*/
      v10 = v8; /*0x101384276*/
      while ( v5 != 1 ) /*0x10138427c*/
      {
        if ( v5 != 2 ) /*0x101384288*/
          goto LABEL_64; /*0x101384288*/
        if ( !v10 ) /*0x101384291*/
        {
          *(_BYTE *)(v4 + 57) = 1; /*0x10138431d*/
          goto LABEL_57; /*0x10138432e*/
        }
        v36 = a1; /*0x101384297*/
        v14 = v13; /*0x10138429b*/
        v15 = v4; /*0x1013842a1*/
        std::path::Components::parse_next_component_back::h201dfb54389de00e(v13, v4); /*0x1013842a7*/
        a1 = v36; /*0x1013842ac*/
        v36[6] = v34; /*0x1013842bb*/
        a1[5] = v33; /*0x1013842c3*/
        a1[4] = v32; /*0x1013842cb*/
        a1[3] = v31; /*0x1013842d3*/
        a1[2] = v30; /*0x1013842db*/
        v16 = v28; /*0x1013842df*/
        a1[1] = v29; /*0x1013842e6*/
        *a1 = v16; /*0x1013842ea*/
        v8 = v10 - v27; /*0x1013842ed*/
        if ( v10 < v27 ) /*0x1013842f1*/
          goto LABEL_63; /*0x1013842f1*/
        v4 = v15; /*0x1013842f7*/
        *(_QWORD *)(v15 + 8) = v8; /*0x1013842fa*/
        v5 = 2; /*0x1013842fe*/
        v10 = v8; /*0x101384303*/
        v13 = v14; /*0x101384306*/
        if ( *(_BYTE *)a1 != 10 ) /*0x101384309*/
          return a1; /*0x101384309*/
        if ( v2 > 2u ) /*0x101384312*/
          goto LABEL_57; /*0x101384312*/
      }
      goto LABEL_55; /*0x10138427c*/
    }
  }
  else if ( !v6 )
  {
    v20 = &v27; /*0x101384430*/
    v10 = v8; /*0x101384434*/
    while ( v5 != 1 )
    {
      if ( v5 != 2 )
LABEL_64:
        core::panicking::panic::h286e2dd5eab048be(
          (__int64)"internal error: entered unreachable codeOsmessageErrorCustomerrorpermission deniedconnection refusednetwork unreachableconnection abortednot connectedaddress in useaddress not availablenetwork downbroken pipeentity already existsoperation would blocknot a directoryis a directorydirectory not emptyread-only filesystem or storage mediumfilesystem loop or indirection limit (e.g. symlink loop)stale network file handleinvalid input parameterinvalid datatimed outwrite zeroseek on unseekable filequota exceededfile too largeresource busyexecutable file busycross-device link or renametoo many linksargument list too longoperation interruptedunsupportedunexpected end of fileout of memoryin progressother erroruncategorized error",
          40,
          (__int64)&off_1019271C0);
      if ( !v10 ) /*0x10138444f*/
      {
        *(_BYTE *)(v4 + 57) = 1; /*0x1013844dc*/
        goto LABEL_57; /*0x1013844ed*/
      }
      v35 = v7; /*0x101384455*/
      v36 = a1; /*0x101384459*/
      v21 = v20; /*0x10138445d*/
      v22 = v4; /*0x101384463*/
      std::path::Components::parse_next_component_back::h201dfb54389de00e(v20, v4); /*0x101384469*/
      a1 = v36; /*0x10138446e*/
      v36[6] = v34; /*0x10138447d*/
      a1[5] = v33; /*0x101384485*/
      a1[4] = v32; /*0x10138448d*/
      a1[3] = v31; /*0x101384495*/
      a1[2] = v30; /*0x10138449d*/
      v23 = v28; /*0x1013844a1*/
      a1[1] = v29; /*0x1013844a8*/
      *a1 = v23; /*0x1013844ac*/
      v8 = v10 - v27; /*0x1013844af*/
      if ( v10 < v27 ) /*0x1013844b3*/
LABEL_63:
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v8, v10, (__int64)&off_1019271A8); /*0x101384552*/
      v4 = v22; /*0x1013844b9*/
      *(_QWORD *)(v22 + 8) = v8; /*0x1013844bc*/
      v5 = 2; /*0x1013844c0*/
      v10 = v8; /*0x1013844c5*/
      v7 = v35; /*0x1013844c8*/
      v20 = v21; /*0x1013844cc*/
      if ( *(_BYTE *)a1 != 10 ) /*0x1013844cf*/
        return a1; /*0x1013844cf*/
      if ( v2 > 2u ) /*0x1013844d4*/
        goto LABEL_57; /*0x1013844d4*/
    }
LABEL_51:
    *(_BYTE *)(v4 + 57) = 3; /*0x1013844ef*/
    if ( v10 ) /*0x1013844f6*/
    {
      if ( v10 == 1 ) /*0x1013844fc*/
      {
        if ( *v7 != 46 ) /*0x101384502*/
          goto LABEL_57; /*0x101384502*/
      }
      else if ( *v7 != 46 || v7[1] != 47 ) /*0x101384537*/
      {
        goto LABEL_57; /*0x101384537*/
      }
      v3 = 7; /*0x101384539*/
      v24 = v8 == 0; /*0x10138453c*/
      v25 = v8 - 1; /*0x10138453c*/
      if ( v24 ) /*0x101384540*/
        core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v25, 0, (__int64)&off_101927178); /*0x10138454d*/
      goto LABEL_56; /*0x101384540*/
    }
  }
LABEL_57:
  *(_BYTE *)a1 = v3; /*0x101384517*/
  return a1; /*0x10138451d*/
}