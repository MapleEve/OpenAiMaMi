// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_search::safe_url::h7b52e3b47b3dbbe3; addr: 0x100aca9b0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:19Z
_QWORD *__fastcall codexmate_lib::core::relay::translator::anthropic_search::safe_url::h7b52e3b47b3dbbe3(
        _QWORD *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  unsigned __int8 *v4; // rdx
  unsigned __int8 *v6; // rax
  unsigned int v7; // edi
  int v8; // r8d
  int v9; // r10d
  int v10; // r9d
  __int64 v11; // r14
  __int64 v13; // r15
  char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // [rsp+8h] [rbp-F8h] BYREF
  _BYTE v17[80]; // [rsp+10h] [rbp-F0h] BYREF
  _QWORD v18[5]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[15]; // [rsp+88h] [rbp-78h] BYREF

  v4 = a2; /*0x100aca9c5*/
  v6 = &a2[a3]; /*0x100aca9d5*/
  while ( a2 != v6 ) /*0x100aca9e3*/
  {
    v7 = *a2; /*0x100aca9e9*/
    if ( (v7 & 0x80u) != 0 ) /*0x100aca9ef*/
    {
      v8 = v7 & 0x1F; /*0x100acaa13*/
      v9 = a2[1] & 0x3F; /*0x100acaa1c*/
      if ( (unsigned __int8)v7 <= 0xDFu ) /*0x100acaa24*/
      {
        a2 += 2; /*0x100acaa68*/
        v7 = v9 | (v8 << 6); /*0x100acaa73*/
        if ( v7 < 0x20 ) /*0x100acaa79*/
          goto LABEL_17; /*0x100acaa79*/
      }
      else
      {
        v10 = (v9 << 6) | a2[2] & 0x3F; /*0x100acaa33*/
        if ( (unsigned __int8)v7 < 0xF0u ) /*0x100acaa3a*/
        {
          a2 += 3; /*0x100acaa7d*/
          v7 = (v8 << 12) | v10; /*0x100acaa88*/
          if ( v7 < 0x20 ) /*0x100acaa8e*/
            goto LABEL_17; /*0x100acaa8e*/
        }
        else
        {
          v7 = ((v7 & 7) << 18) | (v10 << 6) | a2[3] & 0x3F; /*0x100acaa52*/
          if ( v7 == 1114112 ) /*0x100acaa5b*/
            break; /*0x100acaa5b*/
          a2 += 4; /*0x100acaa5d*/
          if ( v7 < 0x20 ) /*0x100acaa64*/
            goto LABEL_17; /*0x100acaa64*/
        }
      }
    }
    else
    {
      ++a2; /*0x100aca9f1*/
      if ( v7 < 0x20 ) /*0x100aca9f7*/
        goto LABEL_17; /*0x100aca9f7*/
    }
    if ( v7 - 127 < 0x21 ) /*0x100acaa96*/
      goto LABEL_17; /*0x100acaa96*/
  }
  v18[4] = 0; /*0x100acaa9e*/
  v18[0] = 0; /*0x100acaaa6*/
  v18[2] = 0; /*0x100acaab1*/
  url::ParseOptions::parse::h7da66aa6bebaf5b6(&v16, v18, v4, a3); /*0x100acaaca*/
  v11 = v16; /*0x100acaacf*/
  if ( v16 == 0x8000000000000000LL ) /*0x100acaad9*/
  {
LABEL_17:
    *a1 = 0x8000000000000000LL; /*0x100acaadb*/
    return a1; /*0x100acaadb*/
  }
  qmemcpy(&v19[1], v17, 0x50u); /*0x100acab01*/
  v19[0] = v16; /*0x100acab04*/
  v13 = v19[1]; /*0x100acab0b*/
  if ( HIDWORD(v19[5]) ) /*0x100acab12*/
  {
    if ( v19[2] <= (unsigned __int64)HIDWORD(v19[5]) ) /*0x100acab1b*/
    {
      if ( v19[2] != HIDWORD(v19[5]) ) /*0x100acab37*/
LABEL_22:
        core::str::slice_error_fail::h480e51fbd8b15eba(v19[1], v19[2], 0, HIDWORD(v19[5]), &off_101C0A4E8); /*0x100acab24*/
    }
    else if ( *(char *)(v19[1] + HIDWORD(v19[5])) <= -65 ) /*0x100acab22*/
    {
      goto LABEL_22; /*0x100acab22*/
    }
    if ( HIDWORD(v19[5]) == 5 ) /*0x100acab3d*/
    {
      v14 = "httpsapp-server-handleexplicit-sqlite-homeverified-cacheunique-latest-schema"; /*0x100acab4d*/
      goto LABEL_28; /*0x100acab4d*/
    }
    if ( HIDWORD(v19[5]) == 4 ) /*0x100acab42*/
    {
      v14 = "httpnsistimeNullRealTextBlobRgbaNoneSomePathmovewaitcellDatarsv1rsv2rsv3maskinsertedresourceproviderendpoint" /*0x100acab44*/
            "{{arch}}appimageNulErrorThreadIdUnixTimeexpectedsegmentsoriginalBorrowedpub_dateis_final";
LABEL_28:
      if ( !memcmp((const void *)v19[1], v14, HIDWORD(v19[5])) ) /*0x100acab5a*/
      {
        if ( url::Url::host_str::h951633b861c322f2(v19) ) /*0x100acab88*/
        {
          url::Url::username::hd711546128392e77(v19); /*0x100acab96*/
          if ( !v15 && !url::Url::password::hd737168add2f42dd(v19) ) /*0x100acaba4*/
          {
            qmemcpy(a1, v19, 0x58u); /*0x100acabba*/
            return a1; /*0x100acabba*/
          }
        }
      }
    }
  }
  *a1 = 0x8000000000000000LL; /*0x100acab63*/
  if ( v11 ) /*0x100acab69*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v11, 1); /*0x100acab7a*/
  return a1; /*0x100acaae1*/
}