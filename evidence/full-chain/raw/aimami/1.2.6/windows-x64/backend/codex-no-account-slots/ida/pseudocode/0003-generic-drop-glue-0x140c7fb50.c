// Function: sub_140C7FB50
// EA: 0x140C7FB50
// Source: mcp__ida-pro-mcp-win__decompile, live IDB "AiMaMi 1.2.6 win64.exe.i64"
// Retrieved: 2026-08-06
// Verified via direct decompile to be GENERIC enum/Option Drop glue for a
// multi-variant temporary value (branches on discriminant bytes at offsets
// +112/+105 and +49, cleans up embedded Vec<T> buffers via sub_140001660).
// This is called from set_codex_no_account_slots (0x140d75ea0) right after the
// apply-handler call -- it is NOT a dedicated "trigger Codex relaunch" business
// function; the "relaunch" semantics are carried purely by the boolean value
// threaded through the manager.request("relaunch") arg and the apply-handler
// call (sub_1405052C0), not by this cleanup routine. Recorded here to close out
// the recovery_attempts trail per red line 13 (don't claim accepted_unknown
// without trying the obvious next step -- this WAS tried, and resolved as generic).
__int64 __fastcall sub_140C7FB50(__int64 a1)
{
  __int64 result;
  __int64 v3, v5, v6, v7, v8, v10, v11, v12, v13, v14, v15;
  _QWORD *v4, *v9;

  result = *(unsigned __int8 *)(a1 + 112);
  if ( *(_BYTE *)(a1 + 112) )
  {
    if ( (_DWORD)result != 3 )
      return result;
    result = *(unsigned __int8 *)(a1 + 105);
    if ( (_DWORD)result == 3 )
    {
      v14 = *(_QWORD *)(a1 + 96);
      if ( (unsigned __int8)sub_141398090(v14) )
        sub_14139A2E0(v14); // Arc drop, generic
      *(_WORD *)(a1 + 106) = 0;
      return a1;
    }
    else if ( !*(_BYTE *)(a1 + 105) )
    {
      v3 = *(_QWORD *)(a1 + 72);
      if ( v3 )
      {
        v4 = (_QWORD *)(*(_QWORD *)(a1 + 64) + 56LL);
        do
        {
          v5 = *(v4 - 7);
          if ( v5 ) sub_140001660(*(v4 - 6), v5, 1);
          v6 = *(v4 - 4);
          if ( v6 ) sub_140001660(*(v4 - 3), v6, 1);
          v7 = *(v4 - 1);
          if ( v7 != -1 )
          {
            if ( v7 ) sub_140001660(*v4, v7, 1);
          }
          v4 += 9;
          --v3;
        }
        while ( v3 );
      }
      result = *(_QWORD *)(a1 + 56);
      if ( result )
      {
        v13 = *(_QWORD *)(a1 + 64);
        return sub_140001660(v13, 72 * result, 8);
      }
    }
  }
  else
  {
    result = *(unsigned __int8 *)(a1 + 49);
    if ( (_DWORD)result == 3 )
    {
      v15 = *(_QWORD *)(a1 + 40);
      if ( (unsigned __int8)sub_141398090(v15) )
        sub_14139A2E0(v15);
      *(_WORD *)(a1 + 50) = 0;
      return a1;
    }
    else if ( !*(_BYTE *)(a1 + 49) )
    {
      v8 = *(_QWORD *)(a1 + 16);
      if ( v8 )
      {
        v9 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
        do
        {
          v10 = *(v9 - 7);
          if ( v10 ) sub_140001660(*(v9 - 6), v10, 1);
          v11 = *(v9 - 4);
          if ( v11 ) sub_140001660(*(v9 - 3), v11, 1);
          v12 = *(v9 - 1);
          if ( v12 != -1 && v12 ) sub_140001660(*v9, v12, 1);
          v9 += 9;
          --v8;
        }
        while ( v8 );
      }
      result = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 )
      {
        v13 = *(_QWORD *)(a1 + 8);
        return sub_140001660(v13, 72 * result, 8);
      }
    }
  }
  return result;
}

// refs: sub_141398090/sub_14139A2E0 (Arc<T> refcount check + drop, generic);
// sub_140001660 (Vec<T>/buffer dealloc, generic). No relaunch-specific behavior
// found in this function.
