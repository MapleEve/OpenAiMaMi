// __ZN13codexmate_lib4core5relay17anthropic_history34rectify_invalid_thinking_signature @ 0x1004afd70 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::core::relay::anthropic_history::rectify_invalid_thinking_signature::hab50149e4ea51438(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // r15
  bool v15; // al
  __int64 v16; // r15
  bool v17; // zf
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int32 v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r14
  _BYTE *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // r12
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int128 *v34; // [rsp+0h] [rbp-60h] BYREF
  char *v35; // [rsp+8h] [rbp-58h]
  __int64 *v36; // [rsp+10h] [rbp-50h]
  __int64 v37; // [rsp+18h] [rbp-48h]
  __int128 v38; // [rsp+20h] [rbp-40h] BYREF
  __int64 v39; // [rsp+30h] [rbp-30h] BYREF

  v38 = 0; /*0x1004afd8a*/
  v39 = 0; /*0x1004afd8e*/
  v7 = 8; /*0x1004afd9d*/
  v8 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x1004afda2*/
         "messagesid_tokenbackupIDfileSizelastTimekeyLabelcallbackis_finalattempts",
         8,
         a2,
         a4,
         a5,
         a6,
         v34,
         v35,
         v36,
         v37);
  if ( !v8 || (v12 = v8, *(_BYTE *)v8 != 4) ) /*0x1004afdb6*/
  {
LABEL_24:
    a1[2] = 0; /*0x1004aff62*/
    a1[1] = 0; /*0x1004aff6a*/
    *a1 = 0; /*0x1004aff72*/
    return a1; /*0x1004aff72*/
  }
  v13 = v8; /*0x1004afdbc*/
  v14 = *(_QWORD *)(v8 + 24); /*0x1004afdbf*/
  v15 = v14 == 0; /*0x1004afdc6*/
  v16 = *(_QWORD *)(v12 + 16) + 32 * v14; /*0x1004afdcd*/
  v17 = v16 == 32; /*0x1004afdd1*/
  v18 = v16 - 32; /*0x1004afdd1*/
  LOBYTE(v9) = v15 || v17; /*0x1004afdd8*/
  if ( !v15 && !v17 ) /*0x1004afdd8*/
  {
    v19 = v12; /*0x1004afddc*/
    v7 = 4; /*0x1004afde6*/
    v20 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1004afdee*/
            "roledonehostautotask-axononearchblueiconplancodedateportrectMovehttpSomeInitBodybody",
            4,
            v18);
    v12 = v19; /*0x1004afdf3*/
    if ( v20 ) /*0x1004afdf9*/
    {
      if ( *(_BYTE *)v20 == 3 && *(_QWORD *)(v20 + 24) == 4 ) /*0x1004afe05*/
      {
        v21 = _byteswap_ulong(**(_DWORD **)(v20 + 16)); /*0x1004afe0d*/
        LOBYTE(v9) = (v21 >= 0x75736573) - (v21 < 0x75736572); /*0x1004afe1c*/
        if ( !(_BYTE)v9 ) /*0x1004afe24*/
        {
          v7 = 7; /*0x1004afec9*/
          v27 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1004afed1*/
                  &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                  7,
                  v18);
          v12 = v19; /*0x1004afed6*/
          if ( v27 ) /*0x1004afedc*/
          {
            if ( *(_BYTE *)v27 == 4 ) /*0x1004afee5*/
            {
              v28 = *(_QWORD *)(v27 + 24); /*0x1004afeeb*/
              if ( v28 ) /*0x1004afef2*/
              {
                v29 = *(_QWORD *)(v27 + 16); /*0x1004afef8*/
                v30 = 32 * v28; /*0x1004afefc*/
                do /*0x1004aff10*/
                {
                  v7 = 4; /*0x1004aff10*/
                  v31 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1004aff1f*/
                          "type",
                          4,
                          v29);
                  v12 = v19; /*0x1004aff24*/
                  if ( v31 ) /*0x1004aff2a*/
                  {
                    if ( *(_BYTE *)v31 == 3 && *(_QWORD *)(v31 + 24) == 11 ) /*0x1004aff36*/
                    {
                      v32 = *(_QWORD **)(v31 + 16); /*0x1004aff38*/
                      v9 = *v32 ^ 0x7365725F6C6F6F74LL; /*0x1004aff49*/
                      v7 = 0x746C757365725F6CLL; /*0x1004aff50*/
                      if ( !(v9 | *(_QWORD *)((char *)v32 + 3) ^ 0x746C757365725F6CLL) ) /*0x1004aff5d*/
                        goto LABEL_24; /*0x1004aff60*/
                    }
                  }
                  v29 += 32; /*0x1004aff02*/
                  v30 -= 32; /*0x1004aff06*/
                }
                while ( v30 ); /*0x1004aff10*/
              }
            }
          }
        }
      }
    }
  }
  v22 = v12 + 8; /*0x1004afe2a*/
  v37 = v22; /*0x1004afe2e*/
  v23 = *(_QWORD *)(v13 + 24); /*0x1004afe32*/
  if ( v23 ) /*0x1004afe39*/
  {
    v24 = *(_QWORD *)(v13 + 16); /*0x1004afe3b*/
    v25 = 32 * v23; /*0x1004afe3f*/
    do /*0x1004afe58*/
    {
      v7 = 7; /*0x1004afe5a*/
      v26 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x1004afe65*/
                       &anon_82c02d676b8d0da9b0bd3e65f9f8f8da_151,
                       7,
                       v24,
                       v9,
                       v10,
                       v11,
                       v34,
                       v35,
                       v36,
                       v37);
      if ( v26 && *v26 == 4 ) /*0x1004afe72*/
      {
        v34 = &v38; /*0x1004afe7c*/
        v35 = (char *)&v38 + 8; /*0x1004afe84*/
        v36 = &v39; /*0x1004afe8c*/
        v7 = (__int64)&v34; /*0x1004afe93*/
        alloc::vec::Vec$LT$T$C$A$GT$::retain_mut::h073096357f8a2b9b(v26 + 8, &v34); /*0x1004afe96*/
      }
      v24 += 32; /*0x1004afe50*/
      v25 -= 32; /*0x1004afe54*/
    }
    while ( v25 ); /*0x1004afe58*/
  }
  alloc::vec::Vec$LT$T$C$A$GT$::retain::h93943b5c441ceb02(v37, v7, v22); /*0x1004afea1*/
  a1[2] = v39; /*0x1004afeaa*/
  *(_OWORD *)a1 = v38; /*0x1004afeba*/
  return a1; /*0x1004aff7c*/
}