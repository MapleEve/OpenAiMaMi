// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND resolve_relay_route node 0x100619360 depth=1
__int64 __fastcall _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5(
        __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  char v5; // r9
  __int64 result; // rax
  char v7; // dl
  unsigned int v8; // r10d
  int v9; // r10d
  int v10; // ebx
  int v11; // r11d
  __int64 v12; // rdx
  bool v13; // zf
  unsigned __int64 v14; // rdx

  if ( *(_DWORD *)a2 == 1 ) /*0x100619369*/
    return core::str::pattern::TwoWaySearcher::next::h13336836f7b0dcd8( /*0x1006193f0*/
             (_DWORD)a1,
             (int)a2 + 8,
             *(_QWORD *)(a2 + 72),
             *(_QWORD *)(a2 + 80),
             *(_QWORD *)(a2 + 88),
             *(_QWORD *)(a2 + 96),
             *(_QWORD *)(a2 + 56) == -1);
  if ( *(_BYTE *)(a2 + 26) ) /*0x10061938f*/
    goto LABEL_4; /*0x100619393*/
  v2 = *(_QWORD *)(a2 + 8); /*0x10061939c*/
  v3 = *(_QWORD *)(a2 + 72); /*0x1006193a0*/
  v4 = *(_QWORD *)(a2 + 80); /*0x1006193a4*/
  v5 = *(_BYTE *)(a2 + 24); /*0x1006193a8*/
  if ( v2 ) /*0x1006193b0*/
  {
    if ( v2 >= v4 ) /*0x1006193b5*/
    {
      if ( v2 != v4 ) /*0x1006193f1*/
        goto LABEL_8; /*0x1006193f1*/
    }
    else if ( *(char *)(v3 + v2) < -64 ) /*0x1006193bc*/
    {
      goto LABEL_8; /*0x1006193bc*/
    }
  }
  if ( v2 != v4 ) /*0x1006193f6*/
  {
    v7 = *(_BYTE *)(v3 + v2); /*0x100619410*/
    if ( v7 < 0 ) /*0x100619417*/
    {
      v9 = v7 & 0x1F; /*0x10061942d*/
      v10 = *(_BYTE *)(v3 + v2 + 1) & 0x3F; /*0x100619437*/
      if ( (unsigned __int8)v7 < 0xE0u ) /*0x10061943d*/
      {
        v8 = v10 | (v9 << 6); /*0x10061947f*/
        if ( (v5 & 1) != 0 ) /*0x100619486*/
          goto LABEL_15; /*0x100619486*/
      }
      else
      {
        v11 = (v10 << 6) | *(_BYTE *)(v3 + v2 + 2) & 0x3F; /*0x10061944c*/
        if ( (unsigned __int8)v7 < 0xF0u ) /*0x100619452*/
        {
          v8 = v11 | (v9 << 12); /*0x100619503*/
          if ( (v5 & 1) != 0 ) /*0x10061950a*/
            goto LABEL_15; /*0x10061950a*/
        }
        else
        {
          v8 = (v11 << 6) | *(_BYTE *)(v3 + v2 + 3) & 0x3F | ((v7 & 7) << 18); /*0x100619470*/
          if ( (v5 & 1) != 0 ) /*0x100619477*/
            goto LABEL_15; /*0x100619477*/
        }
      }
    }
    else
    {
      v8 = *(unsigned __int8 *)(v3 + v2); /*0x100619419*/
      if ( (v5 & 1) != 0 ) /*0x100619420*/
      {
LABEL_15:
        v4 = *(_QWORD *)(a2 + 8); /*0x100619422*/
LABEL_31:
        *(_BYTE *)(a2 + 24) = 0; /*0x1006194e4*/
        goto LABEL_32; /*0x1006194e4*/
      }
    }
    v12 = 1; /*0x100619488*/
    if ( v8 >= 0x80 ) /*0x100619494*/
    {
      v12 = 2; /*0x100619496*/
      if ( v8 >= 0x800 ) /*0x1006194a2*/
        v12 = 4LL - (v8 < 0x10000); /*0x1006194b0*/
    }
    v13 = v2 + v12 == 0; /*0x1006194b4*/
    v14 = v2 + v12; /*0x1006194b4*/
    *(_QWORD *)(a2 + 8) = v14; /*0x1006194b7*/
    if ( !v13 ) /*0x1006194bb*/
    {
      if ( v14 >= v4 ) /*0x1006194c0*/
      {
        if ( v14 != v4 ) /*0x1006194d0*/
          goto LABEL_27; /*0x1006194d0*/
      }
      else if ( *(char *)(v3 + v14) < -64 ) /*0x1006194c6*/
      {
LABEL_27:
        v5 = 1; /*0x1006194c8*/
LABEL_8:
        *(_BYTE *)(a2 + 24) = v5 ^ 1; /*0x1006193c1*/
        core::str::slice_error_fail::h480e51fbd8b15eba(); /*0x1006193d6*/
      }
    }
    if ( v14 != v4 ) /*0x1006194d5*/
      v4 = v14; /*0x1006194e1*/
    goto LABEL_31; /*0x1006194e1*/
  }
  *(_BYTE *)(a2 + 24) = v5 ^ 1; /*0x1006193fd*/
  if ( (v5 & 1) != 0 ) /*0x100619404*/
  {
LABEL_32:
    a1[1] = v4; /*0x1006194e8*/
    a1[2] = v4; /*0x1006194ec*/
    result = 1; /*0x1006194f0*/
    goto LABEL_33; /*0x1006194f0*/
  }
  *(_BYTE *)(a2 + 26) = 1; /*0x10061940a*/
LABEL_4:
  result = 0; /*0x100619395*/
LABEL_33:
  *a1 = result; /*0x1006194f5*/
  return result; /*0x1006193ee*/
}