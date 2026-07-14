// win 1.1.8 detect_api_proxy_config node va=0x140ee3cc0 depth=2
// EE3CC0
__int64 __fastcall sub_140EE3CC0(__int64 *a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v7; // r14
  __int64 *v8; // r15
  char v9; // cl
  PVOID v10; // rcx
  char v11; // r8
  __int64 result; // rax
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  PVOID v20; // rcx
  char v21; // dl
  volatile signed __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r12
  volatile signed __int64 *v25; // rbx
  __int64 v26; // rcx
  void (__fastcall *v27)(__int64 *, unsigned __int64); // r8
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  bool v32; // sf
  void *v33; // rcx
  volatile signed __int64 *v34; // rsi
  char v35; // al
  __int128 v36; // [rsp+40h] [rbp-40h] BYREF
  __int64 v37; // [rsp+50h] [rbp-30h]
  __int64 v38; // [rsp+58h] [rbp-28h] BYREF
  __int64 v39; // [rsp+60h] [rbp-20h]
  __int128 v40; // [rsp+68h] [rbp-18h]
  __int64 v41; // [rsp+78h] [rbp-8h]
  char v42; // [rsp+80h] [rbp+0h]
  _QWORD v43[4]; // [rsp+88h] [rbp+8h] BYREF
  char v44; // [rsp+A8h] [rbp+28h]
  __int64 v45; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v46; // [rsp+B8h] [rbp+38h]
  __int64 v47; // [rsp+C0h] [rbp+40h]
  void *v48; // [rsp+C8h] [rbp+48h]
  volatile signed __int64 *v49; // [rsp+D0h] [rbp+50h] BYREF
  volatile signed __int64 *v50; // [rsp+D8h] [rbp+58h] BYREF
  HANDLE hObject; // [rsp+E0h] [rbp+60h]
  __int64 v52; // [rsp+E8h] [rbp+68h]
  char v53; // [rsp+F8h] [rbp+78h]
  PVOID Address; // [rsp+100h] [rbp+80h]
  void *v55; // [rsp+108h] [rbp+88h]
  int v56; // [rsp+110h] [rbp+90h]
  char v57; // [rsp+115h] [rbp+95h]
  char v58; // [rsp+116h] [rbp+96h]
  char v59; // [rsp+117h] [rbp+97h]
  __int64 v60; // [rsp+118h] [rbp+98h]

  v60 = -2; /*0x140ee3cd9*/
  v43[3] = a2; /*0x140ee3ced*/
  v44 = a3; /*0x140ee3cf1*/
  v7 = *a1; /*0x140ee3cf5*/
  Address = (PVOID)(*a1 + 64); /*0x140ee3cfc*/
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(v7 + 64), 1, 0) ) /*0x140ee3d07*/
  {
    v59 = 1; /*0x140ee3dad*/
    sub_1412ABCB0((signed __int8 *)(v7 + 64)); /*0x140ee3db8*/
  }
  v8 = off_141963EA8; /*0x140ee3d13*/
  if ( !(2 * *off_141963EA8) ) /*0x140ee3d1d*/
  {
    v56 = 0; /*0x140ee3d2b*/
    if ( *(_BYTE *)(v7 + 196) ) /*0x140ee3d36*/
      goto LABEL_5; /*0x140ee3d3e*/
LABEL_11:
    v49 = (volatile signed __int64 *)a2; /*0x140ee3deb*/
    LOBYTE(v50) = a3; /*0x140ee3def*/
    v14 = *(_QWORD *)(v7 + 72); /*0x140ee3df2*/
    v15 = *(_QWORD *)(v7 + 96); /*0x140ee3df6*/
    if ( v15 == v14 ) /*0x140ee3dfd*/
    {
      sub_140EF8DD0(v7 + 72); /*0x140ee3e03*/
      v14 = *(_QWORD *)(v7 + 72); /*0x140ee3e09*/
      v15 = *(_QWORD *)(v7 + 96); /*0x140ee3e0d*/
    }
    *(_QWORD *)(v7 + 96) = v15 + 1; /*0x140ee3e15*/
    v16 = *(_QWORD *)(v7 + 88) + v15; /*0x140ee3e19*/
    v17 = 0; /*0x140ee3e1d*/
    if ( v16 >= v14 ) /*0x140ee3e22*/
      v17 = v14; /*0x140ee3e22*/
    v18 = *(_QWORD *)(v7 + 80); /*0x140ee3e29*/
    v19 = 16 * (v16 - v17); /*0x140ee3e2d*/
    *(_QWORD *)(v18 + v19) = a2; /*0x140ee3e31*/
    *(_BYTE *)(v18 + v19 + 8) = a3; /*0x140ee3e35*/
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 256)); /*0x140ee3e39*/
    if ( *(_QWORD *)(v7 + 248) ) /*0x140ee3e41*/
    {
      _InterlockedDecrement64((volatile signed __int64 *)(v7 + 248)); /*0x140ee3e4d*/
      ++*(_DWORD *)(v7 + 192); /*0x140ee3e55*/
      sub_141065580(v7 + 264); /*0x140ee3e63*/
      goto LABEL_18; /*0x140ee3e69*/
    }
    if ( *(_QWORD *)(v7 + 240) == *(_QWORD *)(v7 + 232) ) /*0x140ee3e79*/
    {
LABEL_18:
      if ( !(_BYTE)v56 ) /*0x140ee3e82*/
      {
        if ( 2 * *v8 ) /*0x140ee3e87*/
        {
          v59 = 0; /*0x140ee4153*/
          if ( !sub_1412AC970() ) /*0x140ee415a*/
            *(_BYTE *)(v7 + 65) = 1; /*0x140ee4168*/
        }
      }
      result = 0; /*0x140ee3e93*/
      v20 = Address; /*0x140ee3e97*/
      v21 = *(_BYTE *)Address; /*0x140ee3e9e*/
      *(_BYTE *)Address = 0; /*0x140ee3e9e*/
      if ( v21 == 2 ) /*0x140ee3ea3*/
      {
        v59 = 0; /*0x140ee411a*/
        WakeByAddressSingle(v20); /*0x140ee4121*/
        return 0; /*0x140ee4127*/
      }
      return result; /*0x140ee4129*/
    }
    v22 = *(volatile signed __int64 **)(v7 + 152); /*0x140ee3ebb*/
    if ( !v22 ) /*0x140ee3ec5*/
      sub_1412AD9C0(aAssertionFaile_102, 46, &off_1414D94C0); /*0x140ee4185*/
    if ( _InterlockedIncrement64(v22) > 0 ) /*0x140ee3ecf*/
    {
      v23 = *(_QWORD *)(v7 + 184); /*0x140ee3edc*/
      v24 = *a4; /*0x140ee3ee3*/
      v25 = (volatile signed __int64 *)a4[1]; /*0x140ee3ee6*/
      v55 = *(void **)(v7 + 152); /*0x140ee3eea*/
      v48 = v55; /*0x140ee3ef1*/
      hObject = (HANDLE)0x8000000000000000LL; /*0x140ee3eff*/
      v49 = nullptr; /*0x140ee3f03*/
      v53 = 0; /*0x140ee3f0b*/
      v26 = *(_QWORD *)(v7 + 56); /*0x140ee3f13*/
      v27 = *(void (__fastcall **)(__int64 *, unsigned __int64))(v26 + 40); /*0x140ee3f1b*/
      v28 = *(_QWORD *)(v7 + 48) + ((*(_QWORD *)(v26 + 16) - 1LL) & 0xFFFFFFFFFFFFFFF0uLL) + 16; /*0x140ee3f29*/
      v57 = 1; /*0x140ee3f2d*/
      v27(&v45, v28); /*0x140ee3f38*/
      v57 = 0; /*0x140ee3f3c*/
      sub_1410653E0(&v38, &v49, &v45); /*0x140ee3f52*/
      if ( *(_DWORD *)(v7 + 16) == 1 ) /*0x140ee3f5d*/
      {
        v29 = *(_QWORD *)(v7 + 24); /*0x140ee3f5f*/
        v38 = 1; /*0x140ee3f63*/
        v39 = v29; /*0x140ee3f6b*/
      }
      v30 = 1; /*0x140ee3f6f*/
      v31 = _InterlockedExchangeAdd64(v25, 1u); /*0x140ee3f79*/
      if ( v24 == 1 ) /*0x140ee3f82*/
      {
        v32 = v31 < 0; /*0x140ee3f84*/
        v33 = v55; /*0x140ee3f87*/
        if ( v32 ) /*0x140ee3f8e*/
          goto LABEL_54; /*0x140ee3f8e*/
      }
      else
      {
        if ( v31 < 0 ) /*0x140ee3f98*/
          goto LABEL_54; /*0x140ee3f98*/
        v30 = 0; /*0x140ee3f9e*/
        v33 = v55; /*0x140ee3fa0*/
      }
      v49 = (volatile signed __int64 *)v30; /*0x140ee3fa7*/
      v50 = v25; /*0x140ee3fab*/
      v52 = v23; /*0x140ee3faf*/
      hObject = v33; /*0x140ee3fb3*/
      v37 = v41; /*0x140ee3fbb*/
      v36 = v40; /*0x140ee3fc3*/
      v58 = 0; /*0x140ee3fd3*/
      sub_140EE66B0(&v45, &v36, v38, v39, v42, 0, &v49); /*0x140ee3ff4*/
      if ( v45 ) /*0x140ee4005*/
      {
        v43[0] = v45; /*0x140ee400b*/
        v43[1] = v46; /*0x140ee400f*/
        v43[2] = v47; /*0x140ee4013*/
        _InterlockedIncrement64((volatile signed __int64 *)(v7 + 240)); /*0x140ee4017*/
        ++*(_QWORD *)(v7 + 184); /*0x140ee401f*/
        sub_140F01CF0(&v49, v7 + 104, v23, v43); /*0x140ee4035*/
        v34 = v49; /*0x140ee403b*/
        if ( v49 ) /*0x140ee4042*/
        {
          CloseHandle(hObject); /*0x140ee404c*/
          if ( !_InterlockedDecrement64(v34) ) /*0x140ee4052*/
            sub_141075440(&v49); /*0x140ee405c*/
          if ( !_InterlockedDecrement64(v50) ) /*0x140ee4066*/
            sub_141075300(&v50); /*0x140ee4074*/
        }
      }
      else
      {
        switch ( v46 & 3 ) /*0x140ee4092*/
        {
          case 0LL: /*0x140ee4092*/
            v35 = *(_BYTE *)(v46 + 16); /*0x140ee4094*/
            goto LABEL_45; /*0x140ee4098*/
          case 1LL: /*0x140ee4092*/
            v35 = *(_BYTE *)(v46 + 15); /*0x140ee40c8*/
            goto LABEL_45; /*0x140ee40c8*/
          case 2LL: /*0x140ee4092*/
            v9 = v56; /*0x140ee40a6*/
            if ( HIDWORD(v46) != 10035 ) /*0x140ee40ac*/
              goto LABEL_6; /*0x140ee40ac*/
            goto LABEL_46; /*0x140ee40ac*/
          case 3LL: /*0x140ee4092*/
            v35 = 42; /*0x140ee40be*/
            if ( HIDWORD(v46) < 0x2A ) /*0x140ee40c3*/
              v35 = BYTE4(v46); /*0x140ee40c3*/
LABEL_45:
            v9 = v56; /*0x140ee40cc*/
            if ( v35 != 13 ) /*0x140ee40d4*/
              goto LABEL_6; /*0x140ee40d4*/
LABEL_46:
            if ( !*(_QWORD *)(v7 + 240) ) /*0x140ee40e4*/
              goto LABEL_6; /*0x140ee40e4*/
            sub_140140280(v46); /*0x140ee40ed*/
            break; /*0x140ee40f3*/
        }
      }
      goto LABEL_18; /*0x140ee407a*/
    }
LABEL_54:
    BUG(); /*0x140ee418b*/
  }
  v59 = 1; /*0x140ee3dc3*/
  LOBYTE(v13) = !sub_1412AC970(); /*0x140ee3dd0*/
  v56 = v13; /*0x140ee3dd2*/
  if ( !*(_BYTE *)(v7 + 196) ) /*0x140ee3ddd*/
    goto LABEL_11; /*0x140ee3de5*/
LABEL_5:
  _InterlockedSub64((volatile signed __int64 *)a2, 0x40u); /*0x140ee3d44*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a2 + 16) + 48LL))(a2); /*0x140ee3d56*/
  v9 = v56; /*0x140ee3d5c*/
LABEL_6:
  if ( !v9 ) /*0x140ee3d64*/
  {
    if ( 2 * *v8 ) /*0x140ee3d69*/
    {
      v59 = 0; /*0x140ee412e*/
      if ( !sub_1412AC970() ) /*0x140ee4138*/
        *(_BYTE *)(v7 + 65) = 1; /*0x140ee4149*/
    }
  }
  v10 = Address; /*0x140ee3d78*/
  v11 = *(_BYTE *)Address; /*0x140ee3d7f*/
  *(_BYTE *)Address = 0; /*0x140ee3d7f*/
  result = 1; /*0x140ee3d82*/
  if ( v11 == 2 ) /*0x140ee3d8b*/
  {
    v59 = 0; /*0x140ee3d91*/
    WakeByAddressSingle(v10); /*0x140ee3d9b*/
    return 1; /*0x140ee3da0*/
  }
  return result; /*0x140ee3ea9*/
}