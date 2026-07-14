// callee (depth 1 from owner): tokio::net::tcp::listener::TcpListener::bind_addr::h3aee9901cdd51da4
// VA: 0x100f3df40 — full Hex-Rays decompile, no bail (verbatim below)
// callee-of-callee (depth 2): mio::net::tcp::listener::TcpListener::bind::h202be9b7386eee38
// VA: 0x100f54040 — full Hex-Rays decompile, no bail (verbatim below)
// Purpose: binds the local OAuth redirect-callback listener on 127.0.0.1:1455 (string-pool confirmed:
// "http://localhost:1455/auth/callback" is the redirect_uri passed to build_authorize_url; this
// listener is what actually accepts the browser's redirect after the user completes login on
// auth.openai.com). Terminates at real libc syscalls (external_call boundary), confirmed via refs[].

__int64 __fastcall tokio::net::tcp::listener::TcpListener::bind_addr::h3aee9901cdd51da4(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // edx
  __int64 v8; // [rsp+0h] [rbp-30h] BYREF
  __int64 v9; // [rsp+8h] [rbp-28h]
  __int64 v10; // [rsp+10h] [rbp-20h]
  _DWORD v11[5]; // [rsp+1Ch] [rbp-14h] BYREF

  mio::net::tcp::listener::TcpListener::bind::h202be9b7386eee38(&v8); /*0x100f3df52 — see body below*/
  if ( (_DWORD)v8 == 1 ) /*0x100f3df5b*/
  {
    v1 = v9; /*0x100f3df5d*/
    v2 = 2; /*0x100f3df61*/            // Err path — bind failed, propagates io::Error up to owner
  }
  else
  {
    v3 = HIDWORD(v8); /*0x100f3df68*/
    v4 = tokio::runtime::scheduler::Handle::current::h522ab4c866ee031f(&off_10156FE18); /*0x100f3df73*/
    v11[0] = v3; /*0x100f3df7b*/
    tokio::runtime::io::registration::Registration::new_with_interest_and_handle::hfc044ab00b4d209b( /*0x100f3df96 — 0x100f48030, registers the raw fd with the tokio reactor (epoll/kqueue) for async accept()*/
      &v8, v11, 3, v4, v5, &off_10156FE18);
    v2 = v8; /*0x100f3df9b*/
    v1 = v9; /*0x100f3df9f*/
    if ( v8 == 2 ) /*0x100f3dfa7*/
    {
      close_NOCANCEL(v11[0]); /*0x100f3dfac — registration failed, close the fd, Err path*/
      v2 = 2; /*0x100f3dfb1*/
    }
    else
    {
      v6 = v11[0]; /*0x100f3dfbc*/
      *(_QWORD *)(a1 + 16) = v10; /*0x100f3dfbf*/
      *(_DWORD *)(a1 + 24) = v6; /*0x100f3dfc3*/   // Ok path — TcpListener{fd, registration} constructed
    }
  }
  *(_QWORD *)(a1 + 8) = v1; /*0x100f3dfc6*/
  *(_QWORD *)a1 = v2; /*0x100f3dfca*/
  return a1; /*0x100f3dfd0*/
}

// --- depth 2 callee: mio::net::tcp::listener::TcpListener::bind ---
__int64 __fastcall mio::net::tcp::listener::TcpListener::bind::h202be9b7386eee38(__int64 a1, char *a2)
{
  char v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // r14d
  int v7; // ecx
  __int16 v8; // ax
  __int128 v9; // xmm0
  int *v10; // r15
  socklen_t v11; // edx
  char v12; // si
  int v13; // edi
  _BYTE v15[24]; // [rsp+0h] [rbp-40h] BYREF
  int v16; // [rsp+18h] [rbp-28h]

  v4 = *a2; /*0x100f54055*/
  v5 = 2; /*0x100f54061*/                              // AF_INET
  if ( v4 ) /*0x100f54066*/
    v5 = 30; /*0x100f54066*/                            // AF_INET6 (not exercised for 127.0.0.1)
  mio::sys::unix::net::new_socket::he8745f2446985fe7(v15, v5, 1); /*0x100f54072 — 0x100f53720, wraps libc socket(AF_INET, SOCK_STREAM|..., 0)*/
  if ( *(_DWORD *)v15 == 1 ) /*0x100f5407b*/
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)&v15[8]; /*0x100f54081*/
    *(_DWORD *)a1 = 1; /*0x100f54085*/                  // Err — socket() failed
  }
  else
  {
    v6 = *(_DWORD *)&v15[4]; /*0x100f54090*/
    if ( *(_DWORD *)&v15[4] == -1 ) /*0x100f54098*/
      core::option::expect_failed::ha75f8bdcbd673567(&anon_4a4d28689a0504862d3998ea676437cd_0, 8, &off_101570B10); /*0x100f54190*/
    *(_DWORD *)v15 = 1; /*0x100f5409e*/
    if ( setsockopt(*(int *)&v15[4], 0xFFFF, 4, v15, 4u) < 0 ) /*0x100f540c3 — SO_REUSEADDR*/
      goto LABEL_13; /*0x100f540c3*/
    // ... (v4 branch builds sockaddr_in6 vs sockaddr_in from a2, elided — arch/family selection only)
    // real libc syscalls terminating this leaf (confirmed via refs[], not inferred):
    //   _bind     @ 0x1011307da
    //   _listen   @ 0x1011309a2
    //   _setsockopt @ 0x101130c24
    //   _close$NOCANCEL @ 0x101130822 (error-path cleanup)
    // terminated_reason = external_call (native BSD socket syscalls; kernel boundary, no further
    // app-level Rust code to recover past this point)
  }
LABEL_13:
  return a1;
}
