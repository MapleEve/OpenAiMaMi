import {
    r as $,
    a8 as ht,
    j as t,
    g as C,
    h as L,
    bw as ft,
    bx as pt,
    by as dt,
    A as V,
    bi as gt,
    an as et,
    s as z
} from "./index-UqyngLFp.js";
const B = 14,
    Y = 12;

function R({
    x: e,
    y: n,
    children: r
}) {
    const s = $.useRef(null),
        [i, a] = $.useState({
            left: e + B,
            top: n + B,
            ready: !1
        });
    return $.useLayoutEffect(() => {
        const c = s.current;
        if (!c) return;
        const o = c.getBoundingClientRect(),
            m = window.innerWidth,
            u = window.innerHeight;
        let l = e + B,
            p = n + B;
        l + o.width > m - Y && (l = e - o.width - B), p + o.height > u - Y && (p = n - o.height - B), l = Math.max(Y, Math.min(l, m - o.width - Y)), p = Math.max(Y, Math.min(p, u - o.height - Y)), a({
            left: l,
            top: p,
            ready: !0
        })
    }, [e, n, r]), typeof document > "u" ? null : ht.createPortal(t.jsx("div", {
        ref: s,
        className: "pointer-events-none fixed z-50 rounded-[8px] border border-border bg-popover px-2 py-1.5 text-[10px] leading-[1.6] text-center shadow-lg dark:[&_div]:text-foreground",
        style: {
            left: i.left,
            top: i.top,
            opacity: i.ready ? 1 : 0
        },
        children: r
    }), document.body)
}
const ct = 10;

function J(e) {
    const n = $.useRef(null),
        [r, s] = $.useState(ct);
    return $.useEffect(() => {
        const i = n.current;
        if (!i) return;
        const a = () => {
            const o = i.clientWidth;
            o > 0 && s(ct * e / o)
        };
        a();
        const c = new ResizeObserver(a);
        return c.observe(i), () => c.disconnect()
    }, [e]), {
        ref: n,
        fs: r
    }
}
const nt = {
    top: 14,
    right: 8,
    bottom: 28,
    left: 36
};

function X(e) {
    if (e <= 0) return 10;
    const n = Math.pow(10, Math.floor(Math.log10(e))),
        r = e / n;
    return (r <= 1 ? 1 : r <= 2 ? 2 : r <= 5 ? 5 : 10) * n
}

function at(e) {
    return e >= 1e6 ? `${(e/1e6).toFixed(1)}M` : e >= 1e3 ? `${(e/1e3).toFixed(e>=1e4?0:1)}K` : String(e)
}

function rt(e, n = 4) {
    const r = e / n;
    return Array.from({
        length: n + 1
    }, (s, i) => Math.round(i * r))
}

function q(e, n, r = 5) {
    if (n <= r) return !0;
    const s = Math.ceil(n / r);
    if (e % s === 0) return !0;
    if (e === n - 1) {
        const i = Math.floor(e / s) * s;
        return e - i >= s * .6
    }
    return !1
}

function tt(e, n, r) {
    if (e.length < 2) return "";
    if (e.length === 2) return `M${e[0][0]},${e[0][1]} L${e[1][0]},${e[1][1]}`;
    const s = a => (a = Math.max(a, n), r != null && (a = Math.min(a, r)), a);
    let i = `M${e[0][0].toFixed(1)},${e[0][1].toFixed(1)}`;
    for (let a = 0; a < e.length - 1; a++) {
        const c = e[Math.max(a - 1, 0)],
            o = e[a],
            m = e[a + 1],
            u = e[Math.min(a + 2, e.length - 1)],
            l = o[0] + (m[0] - c[0]) / 6,
            p = s(o[1] + (m[1] - c[1]) / 6),
            d = m[0] - (u[0] - o[0]) / 6,
            x = s(m[1] - (u[1] - o[1]) / 6);
        i += ` C${l.toFixed(1)},${p.toFixed(1)} ${d.toFixed(1)},${x.toFixed(1)} ${m[0].toFixed(1)},${m[1].toFixed(1)}`
    }
    return i
}

function yt(e, n, r, s) {
    const i = tt(e, r, s);
    return !i || e.length < 2 ? "" : `${i} L${e[e.length-1][0].toFixed(1)},${n.toFixed(1)} L${e[0][0].toFixed(1)},${n.toFixed(1)} Z`
}

function E(e) {
    return {
        x: e.clientX,
        y: e.clientY
    }
}

function jt(e) {
    return !Number.isFinite(e) || e <= 0 ? "0%" : e < .1 ? "<0.1%" : e < 1 ? `${e.toFixed(1)}%` : `${Math.round(e)}%`
}

function vt({
    data: e,
    color: n = "#79D0FF",
    height: r = 160,
    className: s,
    renderTooltip: i
}) {
    const [a, c] = $.useState(null), o = 680, {
        ref: m,
        fs: u
    } = J(o), l = nt, p = o - l.left - l.right, d = r - l.top - l.bottom, x = X(Math.max(...e.map(N => N.value), 1)), j = rt(x), h = Math.min(28, p / e.length * .6), b = p / e.length;
    return t.jsxs("div", {
        className: "relative",
        ref: m,
        children: [t.jsxs("svg", {
            viewBox: `0 0 ${o} ${r}`,
            className: C("w-full", s),
            preserveAspectRatio: "xMidYMid meet",
            children: [j.map(N => {
                const k = l.top + d - N / x * d;
                return t.jsxs("g", {
                    children: [t.jsx("line", {
                        x1: l.left,
                        y1: k,
                        x2: o - l.right,
                        y2: k,
                        stroke: "currentColor",
                        strokeOpacity: .1,
                        strokeWidth: .5,
                        strokeDasharray: N === 0 ? "none" : "3,3"
                    }), t.jsx("text", {
                        x: l.left - 6,
                        y: k + 3,
                        textAnchor: "end",
                        className: "fill-muted-foreground",
                        fontSize: u,
                        children: at(N)
                    })]
                }, N)
            }), e.map((N, k) => {
                if (!q(k, e.length)) return null;
                const F = l.left + k * b + b / 2;
                return t.jsx("line", {
                    x1: F,
                    y1: l.top,
                    x2: F,
                    y2: l.top + d,
                    stroke: "currentColor",
                    strokeOpacity: .1,
                    strokeWidth: .5,
                    strokeDasharray: "3,3"
                }, `vg-${k}`)
            }), e.map((N, k) => {
                const F = l.left + k * b + (b - h) / 2,
                    w = N.value / x * d,
                    S = l.top + d - w;
                return t.jsx("rect", {
                    x: F,
                    y: S,
                    width: h,
                    height: Math.max(w, 0),
                    rx: 3,
                    fill: n,
                    fillOpacity: (a == null ? void 0 : a.idx) === k ? 1 : .85,
                    className: "transition-[fill-opacity] duration-150"
                }, `bar-${k}`)
            }), e.map((N, k) => {
                const F = l.left + k * b;
                return t.jsx("rect", {
                    x: F,
                    y: l.top,
                    width: b,
                    height: d,
                    fill: "transparent",
                    onMouseEnter: w => {
                        c({
                            idx: k,
                            ...E(w)
                        })
                    },
                    onMouseMove: w => c({
                        idx: k,
                        ...E(w)
                    }),
                    onMouseLeave: () => c(null)
                }, `hit-${k}`)
            }), e.map((N, k) => {
                if (!q(k, e.length)) return null;
                const F = l.left + k * b + b / 2;
                return t.jsx("text", {
                    x: F,
                    y: r - 4,
                    textAnchor: "middle",
                    className: "fill-muted-foreground",
                    fontSize: u,
                    children: N.label
                }, k)
            })]
        }), a && i && t.jsx(R, {
            x: a.x,
            y: a.y,
            children: i(a.idx)
        })]
    })
}

function bt({
    labels: e,
    series: n,
    colors: r,
    height: s = 180,
    yMax: i,
    ySuffix: a = "",
    className: c,
    renderTooltip: o
}) {
    const [m, u] = $.useState(null), l = 680, {
        ref: p,
        fs: d
    } = J(l), x = nt, j = l - x.left - x.right, h = s - x.top - x.bottom, b = e.length, N = n.flatMap(y => y.values), k = i ?? X(Math.max(...N, 1)), F = rt(k), w = y => x.left + y / Math.max(b - 1, 1) * j, S = y => x.top + h - y / k * h, A = b > 1 ? j / (b - 1) : j;
    return t.jsxs("div", {
        className: "relative",
        ref: p,
        children: [t.jsxs("svg", {
            viewBox: `0 0 ${l} ${s}`,
            className: C("w-full", c),
            preserveAspectRatio: "xMidYMid meet",
            children: [F.map(y => {
                const f = S(y);
                return t.jsxs("g", {
                    children: [t.jsx("line", {
                        x1: x.left,
                        y1: f,
                        x2: l - x.right,
                        y2: f,
                        stroke: "currentColor",
                        strokeOpacity: .1,
                        strokeWidth: .5,
                        strokeDasharray: y === 0 ? "none" : "3,3"
                    }), t.jsxs("text", {
                        x: x.left - 6,
                        y: f + 3,
                        textAnchor: "end",
                        className: "fill-muted-foreground",
                        fontSize: d,
                        children: [at(y), a]
                    })]
                }, y)
            }), e.map((y, f) => {
                if (!q(f, b)) return null;
                const g = w(f);
                return t.jsx("line", {
                    x1: g,
                    y1: x.top,
                    x2: g,
                    y2: x.top + h,
                    stroke: "currentColor",
                    strokeOpacity: .1,
                    strokeWidth: .5,
                    strokeDasharray: "3,3"
                }, `vg-${f}`)
            }), n.map((y, f) => {
                const g = y.values.map((O, Q) => [w(Q), S(O)]),
                    v = tt(g, x.top, x.top + h),
                    T = yt(g, S(0), x.top, x.top + h);
                return t.jsxs("g", {
                    children: [t.jsx("path", {
                        d: T,
                        fill: r[f],
                        opacity: .06
                    }), t.jsx("path", {
                        d: v,
                        fill: "none",
                        stroke: r[f],
                        strokeWidth: 2.5,
                        strokeLinecap: "round",
                        strokeLinejoin: "round"
                    })]
                }, f)
            }), m && n.map((y, f) => t.jsx("circle", {
                cx: w(m.idx),
                cy: S(y.values[m.idx] ?? 0),
                r: 4,
                fill: r[f],
                stroke: "var(--popover)",
                strokeWidth: 2
            }, f)), e.map((y, f) => {
                const g = w(f) - A / 2;
                return t.jsx("rect", {
                    x: Math.max(g, x.left),
                    y: x.top,
                    width: A,
                    height: h,
                    fill: "transparent",
                    onMouseEnter: v => {
                        u({
                            idx: f,
                            ...E(v)
                        })
                    },
                    onMouseMove: v => u({
                        idx: f,
                        ...E(v)
                    }),
                    onMouseLeave: () => u(null)
                }, `hit-${f}`)
            }), e.map((y, f) => q(f, b) ? t.jsx("text", {
                x: w(f),
                y: s - 4,
                textAnchor: "middle",
                className: "fill-muted-foreground",
                fontSize: d,
                children: y
            }, f) : null)]
        }), m && o && t.jsx(R, {
            x: m.x,
            y: m.y,
            children: o(m.idx)
        })]
    })
}

function kt({
    data: e,
    lineValues: n,
    barColor: r = "#7DE6AA",
    lineColor: s = "#FFD36E",
    height: i = 140,
    className: a,
    renderTooltip: c
}) {
    const [o, m] = $.useState(null), u = 400, {
        ref: l,
        fs: p
    } = J(u), d = {
        top: 14,
        right: 8,
        bottom: 28,
        left: 36
    }, x = u - d.left - d.right, j = i - d.top - d.bottom, h = e.length, b = X(Math.max(...e.map(y => y.value), 1)), N = X(Math.max(...n, 1)), k = Math.min(30, x / h * .6), F = x / h, w = y => d.top + j - y / b * j, S = y => d.top + j - y / N * j, A = y => d.left + y * F + F / 2;
    return t.jsxs("div", {
        className: "relative",
        ref: l,
        children: [t.jsxs("svg", {
            viewBox: `0 0 ${u} ${i}`,
            className: C("w-full", a),
            preserveAspectRatio: "xMidYMid meet",
            children: [
                [0, .33, .66, 1].map((y, f) => {
                    const g = d.top + j * (1 - y);
                    return t.jsx("line", {
                        x1: d.left,
                        y1: g,
                        x2: u - d.right,
                        y2: g,
                        stroke: "currentColor",
                        strokeOpacity: .1,
                        strokeWidth: .5,
                        strokeDasharray: y === 0 ? "none" : "3,3"
                    }, f)
                }), e.map((y, f) => {
                    if (!q(f, h, 4)) return null;
                    const g = A(f);
                    return t.jsx("line", {
                        x1: g,
                        y1: d.top,
                        x2: g,
                        y2: d.top + j,
                        stroke: "currentColor",
                        strokeOpacity: .1,
                        strokeWidth: .5,
                        strokeDasharray: "3,3"
                    }, `vg-${f}`)
                }), e.map((y, f) => {
                    const g = A(f) - k / 2,
                        v = y.value / b * j;
                    return t.jsx("rect", {
                        x: g,
                        y: w(y.value),
                        width: k,
                        height: Math.max(v, 0),
                        rx: 3,
                        fill: r,
                        fillOpacity: (o == null ? void 0 : o.idx) === f ? 1 : .85,
                        className: "transition-[fill-opacity] duration-150"
                    }, `bar-${f}`)
                }), t.jsx("path", {
                    d: tt(n.map((y, f) => [A(f), S(y)]), d.top, d.top + j),
                    fill: "none",
                    stroke: s,
                    strokeWidth: 2,
                    strokeLinecap: "round",
                    strokeLinejoin: "round"
                }), o && t.jsx("circle", {
                    cx: A(o.idx),
                    cy: S(n[o.idx] ?? 0),
                    r: 3.5,
                    fill: s,
                    stroke: "var(--popover)",
                    strokeWidth: 2
                }), e.map((y, f) => {
                    const g = d.left + f * F;
                    return t.jsx("rect", {
                        x: g,
                        y: d.top,
                        width: F,
                        height: j,
                        fill: "transparent",
                        onMouseEnter: v => {
                            m({
                                idx: f,
                                ...E(v)
                            })
                        },
                        onMouseMove: v => m({
                            idx: f,
                            ...E(v)
                        }),
                        onMouseLeave: () => m(null)
                    }, `hit-${f}`)
                }), e.map((y, f) => q(f, h, 4) ? t.jsx("text", {
                    x: A(f),
                    y: i - 4,
                    textAnchor: "middle",
                    className: "fill-muted-foreground",
                    fontSize: p,
                    children: y.label
                }, f) : null)
            ]
        }), o && c && t.jsx(R, {
            x: o.x,
            y: o.y,
            children: c(o.idx)
        })]
    })
}

function ut({
    segments: e,
    centerLabel: n,
    centerSub: r,
    size: s = 140,
    className: i,
    renderTooltip: a
}) {
    const [c, o] = $.useState(null), m = 50, u = 24, l = s / 2, p = 2 * Math.PI * m, d = e.reduce((h, b) => h + b.value, 0) || 1;
    let x = 0;
    const j = e.map(h => {
        const N = h.value / d * p,
            k = {
                ...h,
                dash: N,
                offset: -x
            };
        return x += N, k
    });
    return t.jsxs("div", {
        className: C("relative flex flex-col items-center gap-3", i),
        children: [t.jsxs("svg", {
            viewBox: `0 0 ${s} ${s}`,
            width: s,
            height: s,
            children: [t.jsx("circle", {
                cx: l,
                cy: l,
                r: m,
                fill: "none",
                stroke: "var(--accent)",
                strokeWidth: u
            }), j.map((h, b) => t.jsx("circle", {
                cx: l,
                cy: l,
                r: m,
                fill: "none",
                stroke: h.color,
                strokeWidth: u,
                strokeDasharray: `${h.dash} ${p}`,
                strokeDashoffset: h.offset,
                transform: `rotate(-90,${l},${l})`,
                strokeLinecap: "butt",
                opacity: c != null && c.idx !== b ? .4 : 1,
                className: "transition-opacity duration-150",
                onMouseEnter: N => {
                    o({
                        idx: b,
                        ...E(N)
                    })
                },
                onMouseMove: N => o({
                    idx: b,
                    ...E(N)
                }),
                onMouseLeave: () => o(null)
            }, b)), n && t.jsx("text", {
                x: l,
                y: r ? l - 6 : l,
                textAnchor: "middle",
                dominantBaseline: "central",
                className: "fill-foreground",
                fontSize: 14,
                fontWeight: 700,
                children: n
            }), r && t.jsx("text", {
                x: l,
                y: l + 12,
                textAnchor: "middle",
                dominantBaseline: "central",
                className: "fill-muted-foreground",
                fontSize: 10,
                children: r
            })]
        }), t.jsx("div", {
            className: "space-y-1",
            style: {
                width: s
            },
            children: e.map((h, b) => t.jsxs("div", {
                className: C("flex items-center justify-between text-xs transition-opacity duration-150", c != null && c.idx !== b && "opacity-40"),
                children: [t.jsxs("span", {
                    className: "flex items-center gap-1.5 text-muted-foreground",
                    children: [t.jsx("span", {
                        className: "inline-block h-2 w-2 rounded-full",
                        style: {
                            background: h.color
                        }
                    }), h.label]
                }), t.jsx("span", {
                    className: "font-semibold text-foreground",
                    children: jt(h.value / d * 100)
                })]
            }, h.label))
        }), c && a && t.jsx(R, {
            x: c.x,
            y: c.y,
            children: a(c.idx)
        })]
    })
}

function Nt({
    data: e,
    colorA: n = "#7DE6AA",
    colorB: r = "#FF9A8A",
    lineColor: s = "#7AD6FF",
    height: i = 160,
    className: a,
    renderTooltip: c
}) {
    var f;
    const [o, m] = $.useState(null), u = 680, {
        ref: l,
        fs: p
    } = J(u), d = nt, x = u - d.left - d.right, j = i - d.top - d.bottom, h = e.length, b = X(Math.max(...e.map(g => Math.max(g.a, g.b, g.line ?? 0)), 1)), N = rt(b), F = Math.min(40, x / h * .7) / 2 - 1, w = x / h, S = g => d.top + j - g / b * j, A = g => d.left + g * w + w / 2, y = e.some(g => g.line != null);
    return t.jsxs("div", {
        className: "relative",
        ref: l,
        children: [t.jsxs("svg", {
            viewBox: `0 0 ${u} ${i}`,
            className: C("w-full", a),
            preserveAspectRatio: "xMidYMid meet",
            children: [N.map(g => {
                const v = S(g);
                return t.jsxs("g", {
                    children: [t.jsx("line", {
                        x1: d.left,
                        y1: v,
                        x2: u - d.right,
                        y2: v,
                        stroke: "currentColor",
                        strokeOpacity: .1,
                        strokeWidth: .5,
                        strokeDasharray: g === 0 ? "none" : "3,3"
                    }), t.jsx("text", {
                        x: d.left - 6,
                        y: v + 3,
                        textAnchor: "end",
                        className: "fill-muted-foreground",
                        fontSize: p,
                        children: at(g)
                    })]
                }, g)
            }), e.map((g, v) => {
                if (!q(v, h)) return null;
                const T = A(v);
                return t.jsx("line", {
                    x1: T,
                    y1: d.top,
                    x2: T,
                    y2: d.top + j,
                    stroke: "currentColor",
                    strokeOpacity: .1,
                    strokeWidth: .5,
                    strokeDasharray: "3,3"
                }, `vg-${v}`)
            }), e.map((g, v) => {
                const T = A(v),
                    O = (o == null ? void 0 : o.idx) === v;
                return t.jsxs("g", {
                    children: [t.jsx("rect", {
                        x: T - F - 1,
                        y: S(g.a),
                        width: F,
                        height: Math.max(g.a / b * j, 0),
                        rx: 2,
                        fill: n,
                        fillOpacity: O ? 1 : .85,
                        className: "transition-[fill-opacity] duration-150"
                    }), t.jsx("rect", {
                        x: T + 1,
                        y: S(g.b),
                        width: F,
                        height: Math.max(g.b / b * j, 0),
                        rx: 2,
                        fill: r,
                        fillOpacity: O ? 1 : .85,
                        className: "transition-[fill-opacity] duration-150"
                    })]
                }, v)
            }), y && t.jsx("path", {
                d: tt(e.map((g, v) => [A(v), S(g.line ?? 0)]), d.top, d.top + j),
                fill: "none",
                stroke: s,
                strokeWidth: 2.5,
                strokeLinecap: "round",
                strokeLinejoin: "round"
            }), o && y && t.jsx("circle", {
                cx: A(o.idx),
                cy: S(((f = e[o.idx]) == null ? void 0 : f.line) ?? 0),
                r: 4,
                fill: s,
                stroke: "var(--popover)",
                strokeWidth: 2
            }), e.map((g, v) => {
                const T = d.left + v * w;
                return t.jsx("rect", {
                    x: T,
                    y: d.top,
                    width: w,
                    height: j,
                    fill: "transparent",
                    onMouseEnter: O => {
                        m({
                            idx: v,
                            ...E(O)
                        })
                    },
                    onMouseMove: O => m({
                        idx: v,
                        ...E(O)
                    }),
                    onMouseLeave: () => m(null)
                }, `hit-${v}`)
            }), e.map((g, v) => q(v, h) ? t.jsx("text", {
                x: A(v),
                y: i - 4,
                textAnchor: "middle",
                className: "fill-muted-foreground",
                fontSize: p,
                children: g.label
            }, v) : null)]
        }), o && c && t.jsx(R, {
            x: o.x,
            y: o.y,
            children: c(o.idx)
        })]
    })
}

function Mt({
    data: e,
    color: n = "#79D0FF",
    className: r,
    renderTooltip: s
}) {
    const [i, a] = $.useState(null), c = Math.max(...e.map(o => o.value), 1);
    return t.jsxs("div", {
        className: C("relative space-y-2", r),
        children: [e.map((o, m) => t.jsxs("div", {
            className: C("flex items-center gap-2.5 rounded-md px-1 -mx-1 transition-colors", (i == null ? void 0 : i.idx) === m && "bg-accent/50"),
            onMouseEnter: u => {
                a({
                    idx: m,
                    ...E(u)
                })
            },
            onMouseMove: u => a({
                idx: m,
                ...E(u)
            }),
            onMouseLeave: () => a(null),
            children: [t.jsx("span", {
                className: "w-[120px] shrink-0 truncate text-right text-xs text-muted-foreground",
                children: o.label
            }), t.jsx("div", {
                className: "h-5 flex-1 overflow-hidden rounded bg-accent",
                children: t.jsx("div", {
                    className: "h-full rounded transition-[width] duration-500",
                    style: {
                        width: `${o.value/c*100}%`,
                        background: n
                    }
                })
            }), t.jsx("span", {
                className: "w-9 text-right text-[11px] font-semibold tabular-nums text-muted-foreground",
                children: o.value
            })]
        }, o.label)), i && s && t.jsx(R, {
            x: i.x,
            y: i.y,
            children: s(i.idx)
        })]
    })
}
const _ = 13,
    W = 3,
    st = 7;

function wt({
    data: e,
    colorVar: n = "var(--heatmap-color, #3FE6A1)"
}) {
    const {
        t: r
    } = L(), [s, i] = $.useState(null), a = $.useMemo(() => {
        const u = [];
        let l = [];
        const d = (e.length > 0 ? new Date(e[0].date + "T00:00:00") : new Date).getDay();
        for (let x = 0; x < d; x++) l.push({
            date: "",
            level: -1,
            count: 0
        });
        for (const x of e) l.push(x), l.length === st && (u.push(l), l = []);
        if (l.length > 0) {
            for (; l.length < st;) l.push({
                date: "",
                level: -1,
                count: 0
            });
            u.push(l)
        }
        return u
    }, [e]), c = $.useMemo(() => {
        const u = [];
        let l = -1;
        return a.forEach((p, d) => {
            const x = p.find(h => h.date);
            if (!x) return;
            const j = new Date(x.date + "T00:00:00").getMonth();
            j !== l && (l = j, u.push({
                label: ft(new Date(x.date + "T00:00:00")),
                col: d
            }))
        }), u
    }, [a]), o = a.length * (_ + W) + W, m = st * (_ + W) + W + 18;
    return t.jsxs("div", {
        className: "relative overflow-x-auto",
        children: [t.jsxs("svg", {
            width: o,
            height: m,
            className: "block",
            children: [c.map(u => t.jsx("text", {
                x: u.col * (_ + W) + W,
                y: 12,
                className: "fill-muted-foreground text-[10px]",
                children: u.label
            }, `${u.label}-${u.col}`)), a.map((u, l) => u.map((p, d) => {
                if (p.level < 0) return null;
                const x = l * (_ + W) + W,
                    j = d * (_ + W) + W + 18;
                return t.jsx("rect", {
                    x,
                    y: j,
                    width: _,
                    height: _,
                    rx: 2.5,
                    fill: xt(p.level, n),
                    className: "transition-colors duration-150",
                    onMouseEnter: h => {
                        i({
                            x: h.clientX,
                            y: h.clientY - 6,
                            day: p
                        })
                    },
                    onMouseMove: h => {
                        i({
                            x: h.clientX,
                            y: h.clientY - 6,
                            day: p
                        })
                    },
                    onMouseLeave: () => i(null)
                }, `${l}-${d}`)
            }))]
        }), s && s.day.date && t.jsxs(R, {
            x: s.x,
            y: s.y,
            children: [t.jsx("div", {
                className: "font-semibold text-foreground",
                children: pt(s.day.date)
            }), t.jsxs("div", {
                className: "text-muted-foreground",
                children: [s.day.count, " ", r("analytics.tabSessions", {
                    defaultValue: "sessions"
                })]
            }), s.day.activeMinutes != null && s.day.activeMinutes > 0 && t.jsxs("div", {
                className: "text-muted-foreground",
                children: [r("analytics.todayActive", {
                    defaultValue: "Active"
                }), " ", dt(s.day.activeMinutes)]
            }), s.day.tokens != null && s.day.tokens > 0 && t.jsxs("div", {
                className: "text-muted-foreground",
                children: ["Token ", s.day.tokens >= 1e6 ? `${(s.day.tokens/1e6).toFixed(1)}M` : s.day.tokens >= 1e3 ? `${(s.day.tokens/1e3).toFixed(1)}K` : s.day.tokens]
            })]
        })]
    })
}

function xt(e, n) {
    if (e === 0) return "var(--heatmap-empty, hsl(var(--muted) / 0.5))";
    const r = [0, .25, .5, .75, 1][e] ?? 1;
    return `color-mix(in srgb, ${n} ${Math.round(r*100)}%, transparent)`
}

function Ft({
    colorVar: e = "var(--heatmap-color, #3FE6A1)"
}) {
    return t.jsxs("div", {
        className: "flex items-center gap-1.5 text-[10px] text-muted-foreground",
        children: [t.jsx("span", {
            children: "Less"
        }), [0, 1, 2, 3, 4].map(n => t.jsx("span", {
            className: C("inline-block h-[11px] w-[11px] rounded-[2px]"),
            style: {
                backgroundColor: xt(n, e)
            }
        }, n)), t.jsx("span", {
            children: "More"
        })]
    })
}
const $t = ["activity", "sessions", "token", "tools", "changes", "quota"],
    St = 320,
    P = "var(--heatmap-color, #3FE6A1)";

function ot(e) {
    const n = new Date(e + "T00:00:00");
    return `${n.getMonth()+1}/${n.getDate()}`
}

function Dt(e = new Date) {
    const n = e.getFullYear(),
        r = String(e.getMonth() + 1).padStart(2, "0"),
        s = String(e.getDate()).padStart(2, "0");
    return `${n}-${r}-${s}`
}

function Lt({
    activeAccountKey: e,
    initialQueriesEnabled: n = !0
}) {
    var w, S, A, y, f, g, v, T, O, Q;
    const {
        t: r
    } = L(), [s, i] = $.useState("activity"), [a, c] = $.useState(null), [o, m] = $.useState("year"), [u, l] = $.useState("week"), p = V({
        queryKey: ["session-analytics", u],
        queryFn: () => z.loadSessionAnalytics(u),
        enabled: n && (s === "sessions" || (a == null ? void 0 : a.tab) === "sessions"),
        staleTime: 5 * 6e4,
        refetchOnMount: !1,
        refetchOnWindowFocus: !1
    }), d = V({
        queryKey: ["token-analytics", u],
        queryFn: () => z.loadTokenAnalytics(u),
        enabled: n && (s === "token" || (a == null ? void 0 : a.tab) === "token"),
        staleTime: 5 * 6e4,
        refetchOnMount: !1,
        refetchOnWindowFocus: !1
    }), x = V({
        queryKey: ["tool-analytics", u],
        queryFn: () => z.loadToolAnalytics(u),
        enabled: n && (s === "tools" || (a == null ? void 0 : a.tab) === "tools"),
        staleTime: 5 * 6e4,
        refetchOnMount: !1,
        refetchOnWindowFocus: !1
    }), j = V({
        queryKey: ["change-analytics", u],
        queryFn: () => z.loadChangeAnalytics(u),
        enabled: n && (s === "changes" || (a == null ? void 0 : a.tab) === "changes"),
        staleTime: 5 * 6e4,
        refetchOnMount: !1,
        refetchOnWindowFocus: !1
    }), h = V({
        queryKey: ["quota-history", e ?? "none"],
        queryFn: () => z.loadQuotaHistory(e ?? void 0),
        enabled: n && (s === "quota" || (a == null ? void 0 : a.tab) === "quota") && !!e,
        staleTime: 6e4,
        refetchOnMount: !1,
        refetchOnWindowFocus: !1
    }), b = {
        activity: r("analytics.tabActivity"),
        sessions: r("analytics.tabSessions"),
        token: r("analytics.tabToken"),
        tools: r("analytics.tabTools"),
        changes: r("analytics.tabChanges"),
        quota: r("analytics.tabQuota")
    }, N = {
        activity: {
            loading: !1,
            payload: null,
            error: !1
        },
        sessions: {
            loading: p.isPending || p.isFetching,
            payload: ((w = p.data) == null ? void 0 : w.data) ?? null,
            error: p.isError
        },
        token: {
            loading: d.isPending || d.isFetching,
            payload: ((S = d.data) == null ? void 0 : S.data) ?? null,
            error: d.isError
        },
        tools: {
            loading: x.isPending || x.isFetching,
            payload: ((A = x.data) == null ? void 0 : A.data) ?? null,
            error: x.isError
        },
        changes: {
            loading: j.isPending || j.isFetching,
            payload: ((y = j.data) == null ? void 0 : y.data) ?? null,
            error: j.isError
        },
        quota: {
            loading: h.isPending || h.isFetching,
            payload: ((f = h.data) == null ? void 0 : f.data) ?? null,
            error: h.isError
        }
    }, k = a !== null;
    $.useEffect(() => {
        if (!a) return;
        const M = N[a.tab];
        if (!M.payload && !M.error) return;
        const lt = Date.now() - a.startedAt,
            it = Math.max(0, St - lt),
            mt = window.setTimeout(() => {
                i(a.tab), c(Z => (Z == null ? void 0 : Z.tab) === a.tab ? null : Z)
            }, it);
        return () => window.clearTimeout(mt)
    }, [a, N]);

    function F(M) {
        if (i(M), M === "activity") {
            c(null);
            return
        }
        if (M === s || M === (a == null ? void 0 : a.tab)) return;
        if (M === "quota" && !e) {
            c(null), i(M);
            return
        }
        if (!!N[M].payload) {
            c(null), i(M);
            return
        }
        c({
            tab: M,
            startedAt: Date.now()
        })
    }
    return t.jsxs("div", {
        className: "overflow-hidden rounded-[15px] border border-border bg-card",
        children: [t.jsxs("div", {
            className: "flex flex-wrap items-center justify-between gap-3 px-5 pt-4",
            children: [t.jsxs("div", {
                className: "flex flex-wrap items-center gap-3",
                children: [t.jsx("div", {
                    className: "flex gap-0.5 rounded-lg bg-muted p-0.5 dark:bg-white/[0.06]",
                    children: $t.map(M => t.jsx("button", {
                        onClick: () => F(M),
                        className: C("rounded-md px-3 py-[5px] text-xs font-medium transition-colors", s === M ? "bg-white text-foreground shadow-sm dark:bg-white/[0.10]" : "text-muted-foreground hover:text-foreground"),
                        children: b[M]
                    }, M))
                }), k ? t.jsx(Pt, {
                    label: r("analytics.loadingData")
                }) : null]
            }), s === "activity" ? t.jsx("div", {
                className: "flex gap-0.5 rounded-lg bg-muted p-0.5 dark:bg-white/[0.06]",
                children: ["week", "month", "year"].map(M => t.jsx("button", {
                    onClick: () => m(M),
                    className: C("rounded-md px-2.5 py-1 text-[11px] font-medium transition-colors", o === M ? "bg-white text-foreground shadow-sm dark:bg-white/[0.10]" : "text-muted-foreground hover:text-foreground"),
                    children: r(M === "week" ? "analytics.rangeWeek" : M === "month" ? "analytics.rangeMonth" : "analytics.rangeYear")
                }, M))
            }) : t.jsx("div", {
                className: "flex gap-0.5 rounded-lg bg-muted p-0.5 dark:bg-white/[0.06]",
                children: ["today", "week", "month"].map(M => t.jsx("button", {
                    onClick: () => l(M),
                    className: C("rounded-md px-2.5 py-1 text-[11px] font-medium transition-colors", u === M ? "bg-white text-foreground shadow-sm dark:bg-white/[0.10]" : "text-muted-foreground hover:text-foreground"),
                    children: r(M === "today" ? "analytics.rangeToday" : M === "week" ? "analytics.rangeWeek" : "analytics.rangeMonth")
                }, M))
            })]
        }), t.jsxs("div", {
            className: "p-5",
            children: [s === "activity" && t.jsx(At, {
                range: o,
                enabled: n
            }), s === "sessions" && t.jsx(Tt, {
                payload: ((g = p.data) == null ? void 0 : g.data) ?? null,
                loading: !p.data && (p.isPending || p.isFetching),
                range: u
            }), s === "token" && t.jsx(Ct, {
                payload: ((v = d.data) == null ? void 0 : v.data) ?? null,
                loading: !d.data && (d.isPending || d.isFetching),
                range: u
            }), s === "tools" && t.jsx(Et, {
                payload: ((T = x.data) == null ? void 0 : T.data) ?? null,
                loading: !x.data && (x.isPending || x.isFetching)
            }), s === "changes" && t.jsx(Ot, {
                payload: ((O = j.data) == null ? void 0 : O.data) ?? null,
                loading: !j.data && (j.isPending || j.isFetching),
                range: u
            }), s === "quota" && t.jsx(Wt, {
                accountKey: e,
                payload: ((Q = h.data) == null ? void 0 : Q.data) ?? null,
                loading: !h.data && (h.isPending || h.isFetching)
            })]
        })]
    })
}

function At({
    range: e,
    enabled: n
}) {
    const {
        t: r
    } = L(), {
        data: s
    } = V({
        queryKey: ["usage-analytics"],
        queryFn: () => z.loadUsageAnalytics(),
        enabled: n,
        staleTime: 1 / 0,
        refetchOnMount: !1,
        refetchOnWindowFocus: !1
    }), i = (s == null ? void 0 : s.data.dailyActivity) ?? [], a = s == null ? void 0 : s.data.today, c = Dt(), o = $.useMemo(() => (e === "week" ? i.slice(-7) : e === "month" ? i.slice(-30) : i).map(p => ({
        date: p.date,
        level: p.activityLevel,
        count: p.sessionCount,
        activeMinutes: p.date === c ? a == null ? void 0 : a.activeMinutesEstimate : void 0
    })), [i, e, c, a]), m = i.slice(-7).filter(l => l.sessionCount > 0).length, u = i.slice(-30).filter(l => l.sessionCount > 0).length;
    return t.jsxs(t.Fragment, {
        children: [t.jsx("h3", {
            className: "mb-4 text-[13px] font-bold",
            children: r("analytics.activityTitle")
        }), t.jsxs("div", {
            children: [t.jsx(wt, {
                data: o
            }), t.jsx("div", {
                className: "mt-2 flex justify-center",
                children: t.jsx(Ft, {})
            })]
        }), t.jsxs("div", {
            className: "mt-4 flex items-center divide-x divide-border border-t border-border pt-3.5 [&>*]:px-7 [&>*:first-child]:pl-0 [&>*:last-child]:pr-0",
            children: [t.jsx(D, {
                label: r("analytics.todayActive"),
                value: a ? dt(a.activeMinutesEstimate) : "—"
            }), t.jsx(D, {
                label: r("analytics.weekActiveDays"),
                value: `${m} ${r("analytics.days")}`
            }), t.jsx(D, {
                label: r("analytics.monthActiveDays"),
                value: `${u} ${r("analytics.days")}`
            })]
        })]
    })
}

function Tt({
    range: e,
    payload: n,
    loading: r
}) {
    const {
        t: s
    } = L();
    if (r || !n) return t.jsx(G, {});
    if (n.totalSessions === 0) return t.jsx(U, {
        title: s("analytics.sessionsEmptyTitle"),
        description: s("analytics.sessionsEmptyDesc")
    });
    const i = n.series.map(a => ({
        label: e === "today" ? s("analytics.today") : ot(a.date),
        value: a.count
    }));
    return t.jsxs(t.Fragment, {
        children: [t.jsx("h3", {
            className: "mb-4 text-[13px] font-bold",
            children: s("analytics.sessionTitle")
        }), t.jsx(vt, {
            data: i,
            color: P,
            renderTooltip: a => {
                const c = n.series[a];
                return c ? t.jsxs(t.Fragment, {
                    children: [t.jsx("div", {
                        className: "font-semibold text-foreground",
                        children: c.date
                    }), t.jsxs("div", {
                        className: "text-muted-foreground",
                        children: [c.count, " ", s("analytics.tabSessions")]
                    })]
                }) : null
            }
        }), t.jsxs("div", {
            className: "mt-4 flex items-center divide-x divide-border border-t border-border pt-3.5 [&>*]:px-7 [&>*:first-child]:pl-0 [&>*:last-child]:pr-0",
            children: [t.jsx(D, {
                label: s("analytics.totalSessions"),
                value: String(n.totalSessions)
            }), t.jsx(D, {
                label: s("analytics.avgTurns"),
                value: n.avgTurns.toFixed(1)
            }), t.jsx(D, {
                label: s("analytics.activeDays"),
                value: `${n.activeDays}`
            })]
        })]
    })
}

function Ct({
    range: e,
    payload: n,
    loading: r
}) {
    const {
        t: s
    } = L();
    if (r || !n) return t.jsx(G, {});
    if (n.totalTokens === 0) return t.jsx(U, {
        title: s("analytics.tokenEmptyTitle"),
        description: s("analytics.tokenEmptyDesc")
    });
    const i = n.series.map(o => ({
            label: e === "today" ? s("analytics.today") : ot(o.date),
            value: o.totalTokens
        })),
        a = n.series.map(o => o.cumulative),
        c = [{
            label: s("analytics.tokenInput"),
            value: n.inputTotal,
            color: "#79D0FF"
        }, {
            label: s("analytics.tokenOutput"),
            value: n.outputTotal,
            color: "#7DE6AA"
        }, {
            label: s("analytics.tokenReasoning"),
            value: n.reasoningTotal,
            color: "#FFD36E"
        }];
    return t.jsxs(t.Fragment, {
        children: [t.jsx("h3", {
            className: "mb-4 text-[13px] font-bold",
            children: s("analytics.tokenTitle")
        }), t.jsxs("div", {
            className: "flex items-center gap-2 mb-3",
            children: [t.jsx(H, {
                color: P,
                label: s("analytics.tokenUsage")
            }), t.jsx(H, {
                color: "#FFD36E",
                label: s("analytics.tokenCumulative")
            })]
        }), t.jsxs("div", {
            className: "grid grid-cols-[1fr_170px] gap-4 items-start",
            children: [t.jsx(kt, {
                data: i,
                lineValues: a,
                barColor: P,
                renderTooltip: o => {
                    const m = n.series[o];
                    return m ? t.jsxs(t.Fragment, {
                        children: [t.jsx("div", {
                            className: "font-semibold text-foreground",
                            children: m.date
                        }), t.jsxs("div", {
                            className: "text-muted-foreground",
                            children: [s("analytics.tokenUsage"), " ", I(m.totalTokens)]
                        }), t.jsxs("div", {
                            className: "text-muted-foreground",
                            children: [s("analytics.tokenCumulative"), " ", I(m.cumulative)]
                        })]
                    }) : null
                }
            }), t.jsx(ut, {
                segments: c,
                centerLabel: I(n.totalTokens),
                centerSub: "Total",
                size: 130,
                renderTooltip: o => {
                    const m = c[o];
                    if (!m) return null;
                    const u = n.totalTokens > 0 ? m.value / n.totalTokens * 100 : 0;
                    return t.jsxs(t.Fragment, {
                        children: [t.jsx("div", {
                            className: "font-semibold text-foreground",
                            children: m.label
                        }), t.jsx("div", {
                            className: "text-muted-foreground",
                            children: I(m.value)
                        }), t.jsx("div", {
                            className: "text-muted-foreground",
                            children: K(u)
                        })]
                    })
                }
            })]
        }), t.jsxs("div", {
            className: "mt-4 flex items-center divide-x divide-border border-t border-border pt-3.5 [&>*]:px-7 [&>*:first-child]:pl-0 [&>*:last-child]:pr-0",
            children: [t.jsx(D, {
                label: s("analytics.totalToken"),
                value: I(n.totalTokens)
            }), t.jsx(D, {
                label: s("analytics.avgTokenPerSession"),
                value: I(Math.round(n.avgPerSession))
            }), t.jsx(D, {
                label: s("analytics.reasoningPct"),
                value: K(n.reasoningPct)
            })]
        })]
    })
}

function Et({
    payload: e,
    loading: n
}) {
    const {
        t: r
    } = L();
    if (n || !e) return t.jsx(G, {});
    if (e.totalCalls === 0) return t.jsx(U, {
        title: r("analytics.toolsEmptyTitle"),
        description: r("analytics.toolsEmptyDesc")
    });
    const s = e.topTools.map(a => ({
            label: a.name,
            value: a.count
        })),
        i = [{
            label: r("analytics.editTasks"),
            value: e.editCount,
            color: P
        }, {
            label: r("analytics.searchTasks"),
            value: e.searchCount,
            color: "#7AD6FF"
        }];
    return t.jsxs(t.Fragment, {
        children: [t.jsx("h3", {
            className: "mb-4 text-[13px] font-bold",
            children: r("analytics.toolTitle")
        }), t.jsxs("div", {
            className: "grid grid-cols-[1fr_170px] gap-4 items-start",
            children: [t.jsx(Mt, {
                data: s,
                color: P,
                renderTooltip: a => {
                    const c = e.topTools[a];
                    if (!c) return null;
                    const o = e.totalCalls > 0 ? c.count / e.totalCalls * 100 : 0;
                    return t.jsxs(t.Fragment, {
                        children: [t.jsx("div", {
                            className: "font-semibold text-foreground",
                            children: c.name
                        }), t.jsx("div", {
                            className: "text-muted-foreground",
                            children: r("analytics.callCount", {
                                count: c.count
                            })
                        }), t.jsx("div", {
                            className: "text-muted-foreground",
                            children: r("analytics.sharePct", {
                                pct: K(o)
                            })
                        })]
                    })
                }
            }), t.jsx(ut, {
                segments: i,
                centerLabel: String(e.totalCalls),
                centerSub: r("analytics.totalCalls"),
                size: 130,
                renderTooltip: a => {
                    const c = i[a];
                    if (!c) return null;
                    const o = e.totalCalls > 0 ? c.value / e.totalCalls * 100 : 0;
                    return t.jsxs(t.Fragment, {
                        children: [t.jsx("div", {
                            className: "font-semibold text-foreground",
                            children: c.label
                        }), t.jsx("div", {
                            className: "text-muted-foreground",
                            children: r("analytics.callCount", {
                                count: c.value
                            })
                        }), t.jsx("div", {
                            className: "text-muted-foreground",
                            children: r("analytics.sharePct", {
                                pct: K(o)
                            })
                        })]
                    })
                }
            })]
        }), t.jsxs("div", {
            className: "mt-4 flex items-center divide-x divide-border border-t border-border pt-3.5 [&>*]:px-7 [&>*:first-child]:pl-0 [&>*:last-child]:pr-0",
            children: [t.jsx(D, {
                label: r("analytics.totalCalls"),
                value: String(e.totalCalls)
            }), t.jsx(D, {
                label: r("analytics.toolTypes"),
                value: String(e.distinctCount)
            }), t.jsx(D, {
                label: r("analytics.searchPct"),
                value: K(e.totalCalls > 0 ? e.searchCount / e.totalCalls * 100 : 0)
            })]
        })]
    })
}

function Ot({
    range: e,
    payload: n,
    loading: r
}) {
    const {
        t: s
    } = L();
    if (r || !n) return t.jsx(G, {});
    if (n.totalCommands === 0) return t.jsx(U, {
        title: s("analytics.changesEmptyTitle"),
        description: s("analytics.changesEmptyDesc")
    });
    const i = n.series.map(a => ({
        label: e === "today" ? s("analytics.today") : ot(a.date),
        a: a.writeOps,
        b: a.readOps,
        line: a.commands
    }));
    return t.jsxs(t.Fragment, {
        children: [t.jsx("h3", {
            className: "mb-4 text-[13px] font-bold",
            children: s("analytics.changeTitle")
        }), t.jsxs("div", {
            className: "flex items-center gap-2 mb-3",
            children: [t.jsx(H, {
                color: P,
                label: s("analytics.writeOps")
            }), t.jsx(H, {
                color: "#FF9A8A",
                label: s("analytics.readOps")
            }), t.jsx(H, {
                color: "#7AD6FF",
                label: s("analytics.totalOps")
            })]
        }), t.jsx(Nt, {
            data: i,
            colorA: P,
            renderTooltip: a => {
                const c = n.series[a];
                return c ? t.jsxs(t.Fragment, {
                    children: [t.jsx("div", {
                        className: "font-semibold text-foreground",
                        children: c.date
                    }), t.jsxs("div", {
                        className: "text-muted-foreground",
                        children: [s("analytics.writeOps"), " ", c.writeOps]
                    }), t.jsxs("div", {
                        className: "text-muted-foreground",
                        children: [s("analytics.readOps"), " ", c.readOps]
                    }), t.jsxs("div", {
                        className: "text-muted-foreground",
                        children: [s("analytics.totalOps"), " ", c.commands]
                    })]
                }) : null
            }
        }), t.jsxs("div", {
            className: "mt-4 flex items-center divide-x divide-border border-t border-border pt-3.5 [&>*]:px-7 [&>*:first-child]:pl-0 [&>*:last-child]:pr-0",
            children: [t.jsx(D, {
                label: s("analytics.writeTotal"),
                value: String(n.writeCommands),
                color: "#10b981"
            }), t.jsx(D, {
                label: s("analytics.readTotal"),
                value: String(n.readCommands),
                color: "#ef4444"
            }), t.jsx(D, {
                label: s("analytics.netTotal"),
                value: String(n.totalCommands),
                color: "#3b82f6"
            }), t.jsx(D, {
                label: s("analytics.filesTotal"),
                value: String(n.otherCommands)
            })]
        })]
    })
}

function Wt({
    accountKey: e,
    payload: n,
    loading: r
}) {
    const {
        t: s
    } = L(), i = (n == null ? void 0 : n.points) ?? [];
    if (r) return t.jsx(G, {});
    if (!e) return t.jsx(U, {
        title: s("analytics.quotaNoAccountTitle"),
        description: s("analytics.quotaNoAccountDesc")
    });
    if (i.length < 2) return t.jsx(U, {
        title: s("analytics.quotaInsufficientTitle"),
        description: s("analytics.quotaInsufficientDesc")
    });
    const a = i.map(l => {
            const p = new Date(l.timestamp * 1e3);
            return `${p.getMonth()+1}/${p.getDate()}`
        }),
        c = i.map(l => l.primaryUsedPercent != null ? 100 - l.primaryUsedPercent : 0),
        o = i.map(l => l.secondaryUsedPercent != null ? 100 - l.secondaryUsedPercent : 0),
        m = c[c.length - 1] ?? 0,
        u = o[o.length - 1] ?? 0;
    return t.jsxs(t.Fragment, {
        children: [t.jsx("h3", {
            className: "mb-4 text-[13px] font-bold",
            children: s("analytics.quotaTitle")
        }), t.jsxs("div", {
            className: "flex items-center gap-2 mb-3",
            children: [t.jsx(H, {
                color: P,
                label: s("analytics.quota5h")
            }), t.jsx(H, {
                color: "#7AD6FF",
                label: s("analytics.quota1w")
            })]
        }), t.jsx(bt, {
            labels: a,
            series: [{
                label: "5h",
                values: c
            }, {
                label: "1w",
                values: o
            }],
            colors: [P, "#7AD6FF"],
            yMax: 100,
            ySuffix: "%",
            renderTooltip: l => {
                const p = i[l];
                if (!p) return null;
                const d = new Date(p.timestamp * 1e3),
                    x = `${d.getFullYear()}/${d.getMonth()+1}/${d.getDate()} ${String(d.getHours()).padStart(2,"0")}:${String(d.getMinutes()).padStart(2,"0")}`;
                return t.jsxs(t.Fragment, {
                    children: [t.jsx("div", {
                        className: "font-semibold text-foreground",
                        children: x
                    }), t.jsxs("div", {
                        className: "text-muted-foreground",
                        children: [s("analytics.quota5h"), " ", Math.round(c[l]), "%"]
                    }), t.jsxs("div", {
                        className: "text-muted-foreground",
                        children: [s("analytics.quota1w"), " ", Math.round(o[l]), "%"]
                    })]
                })
            }
        }), t.jsxs("div", {
            className: "mt-4 flex items-center divide-x divide-border border-t border-border pt-3.5 [&>*]:px-7 [&>*:first-child]:pl-0 [&>*:last-child]:pr-0",
            children: [t.jsx(D, {
                label: s("analytics.quota5h"),
                value: `${Math.round(m)}%`,
                color: P
            }), t.jsx(D, {
                label: s("analytics.quota1w"),
                value: `${Math.round(u)}%`,
                color: "#7AD6FF"
            })]
        })]
    })
}

function D({
    label: e,
    value: n,
    color: r
}) {
    return t.jsxs("div", {
        className: "flex flex-col items-center gap-0.5",
        children: [t.jsx("span", {
            className: "text-[11px] font-medium text-muted-foreground",
            children: e
        }), t.jsx("span", {
            className: "text-sm font-bold",
            style: r ? {
                color: r
            } : void 0,
            children: n
        })]
    })
}

function H({
    color: e,
    label: n
}) {
    return t.jsxs("span", {
        className: "flex items-center gap-1.5 text-[11px] text-muted-foreground",
        children: [t.jsxs("span", {
            className: "relative inline-flex h-[9px] w-[9px] items-center justify-center",
            children: [t.jsx("span", {
                className: "absolute inset-0 rounded-full opacity-20",
                style: {
                    background: e
                }
            }), t.jsx("span", {
                className: "relative h-[5px] w-[5px] rounded-full",
                style: {
                    background: e
                }
            })]
        }), n]
    })
}

function G() {
    return t.jsxs("div", {
        className: "space-y-4",
        children: [t.jsx("div", {
            className: "flex h-[160px] items-end gap-3",
            children: Array.from({
                length: 8
            }).map((e, n) => t.jsx(et, {
                className: "flex-1 rounded-[8px]",
                style: {
                    height: `${48+n%4*22}px`
                }
            }, n))
        }), t.jsx("div", {
            className: "flex items-center divide-x divide-border border-t border-border pt-3.5 [&>*]:px-7 [&>*:first-child]:pl-0 [&>*:last-child]:pr-0",
            children: Array.from({
                length: 3
            }).map((e, n) => t.jsxs("div", {
                className: "space-y-2",
                children: [t.jsx(et, {
                    className: "h-3 w-16"
                }), t.jsx(et, {
                    className: "h-5 w-12"
                })]
            }, n))
        })]
    })
}

function U({
    title: e,
    description: n
}) {
    return t.jsxs("div", {
        className: "flex min-h-[220px] flex-col items-center justify-center rounded-[8px] border border-dashed border-border/80 bg-muted/20 px-6 text-center",
        children: [t.jsx("div", {
            className: "text-sm font-semibold text-foreground",
            children: e
        }), n ? t.jsx("div", {
            className: "mt-1 max-w-sm text-xs leading-5 text-muted-foreground",
            children: n
        }) : null]
    })
}

function Pt({
    label: e
}) {
    return t.jsxs("div", {
        className: "inline-flex items-center gap-2 rounded-full border border-border/80 bg-background/70 px-3 py-1.5 text-[11px] font-medium text-muted-foreground shadow-sm backdrop-blur-sm dark:bg-white/[0.04]",
        children: [t.jsx(gt, {
            className: "h-3.5 w-3.5 text-muted-foreground",
            "data-icon": "inline-start"
        }), t.jsx("span", {
            children: e
        })]
    })
}

function K(e) {
    return !Number.isFinite(e) || e <= 0 ? "0%" : e < .1 ? "<0.1%" : e < 1 ? `${e.toFixed(1)}%` : `${Math.round(e)}%`
}

function I(e) {
    return e >= 1e6 ? `${(e/1e6).toFixed(1)}M` : e >= 1e3 ? `${(e/1e3).toFixed(1)}K` : String(e)
}
export {
    Lt as AnalyticsPanel
};