import {
    c as u,
    j as a,
    F as v,
    g as p,
    r as i,
    aM as f,
    a7 as c
} from "./index-UqyngLFp.js";
/**
 * @license lucide-react v0.468.0 - ISC
 *
 * This source code is licensed under the ISC license.
 * See the LICENSE file in the root directory of this source tree.
 */
const A = u("Activity", [
    ["path", {
        d: "M22 12h-2.48a2 2 0 0 0-1.93 1.46l-2.35 8.36a.25.25 0 0 1-.48 0L9.24 2.18a.25.25 0 0 0-.48 0l-2.35 8.36A2 2 0 0 1 4.49 12H2",
        key: "169zse"
    }]
]);

function I({
    tooltip: e,
    onClick: r,
    disabled: d,
    busy: o,
    destructive: m,
    highlight: h,
    ariaLabel: t,
    onMouseEnter: n,
    onMouseLeave: y,
    buttonClassName: x,
    children: s
}) {
    return a.jsx(v.Trigger, {
        content: e,
        children: a.jsx("button", {
            type: "button",
            className: p("relative flex aspect-square items-center justify-center rounded-full p-[7px] text-muted-foreground transition-all hover:bg-card hover:text-foreground hover:shadow-sm disabled:pointer-events-none disabled:opacity-30", m && "hover:border-destructive hover:bg-destructive hover:text-white", h && "bg-primary/10 text-primary hover:bg-primary/15 hover:text-primary", x),
            onClick: r,
            onMouseEnter: n,
            onMouseLeave: y,
            disabled: d,
            "aria-busy": o,
            "aria-label": t ?? e,
            children: s
        })
    })
}
const g = {
        normal: {
            y: 0
        },
        animate: {
            y: -1.1
        }
    },
    l = {
        type: "spring",
        stiffness: 500,
        damping: 30
    },
    j = i.forwardRef(({
        onMouseEnter: e,
        onMouseLeave: r,
        className: d,
        size: o = 28,
        ...m
    }, h) => {
        const t = f(),
            n = i.useRef(!1);
        i.useImperativeHandle(h, () => (n.current = !0, {
            startAnimation: () => t.start("animate"),
            stopAnimation: () => t.start("normal")
        }));
        const y = i.useCallback(s => {
                n.current ? e == null || e(s) : t.start("animate")
            }, [t, e]),
            x = i.useCallback(s => {
                n.current ? r == null || r(s) : t.start("normal")
            }, [t, r]);
        return a.jsx("div", {
            className: p(d),
            onMouseEnter: y,
            onMouseLeave: x,
            ...m,
            children: a.jsxs("svg", {
                fill: "none",
                height: o,
                stroke: "currentColor",
                strokeLinecap: "round",
                strokeLinejoin: "round",
                strokeWidth: "2",
                viewBox: "0 0 24 24",
                width: o,
                xmlns: "http://www.w3.org/2000/svg",
                children: [a.jsxs(c.g, {
                    animate: t,
                    transition: l,
                    variants: g,
                    children: [a.jsx("path", {
                        d: "M3 6h18"
                    }), a.jsx("path", {
                        d: "M8 6V4c0-1 1-2 2-2h4c1 0 2 1 2 2v2"
                    })]
                }), a.jsx(c.path, {
                    animate: t,
                    d: "M19 8v12c0 1-1 2-2 2H7c-1 0-2-1-2-2V8",
                    transition: l,
                    variants: {
                        normal: {
                            d: "M19 8v12c0 1-1 2-2 2H7c-1 0-2-1-2-2V8"
                        },
                        animate: {
                            d: "M19 9v12c0 1-1 2-2 2H7c-1 0-2-1-2-2V9"
                        }
                    }
                }), a.jsx(c.line, {
                    animate: t,
                    transition: l,
                    variants: {
                        normal: {
                            y1: 11,
                            y2: 17
                        },
                        animate: {
                            y1: 11.5,
                            y2: 17.5
                        }
                    },
                    x1: "10",
                    x2: "10",
                    y1: "11",
                    y2: "17"
                }), a.jsx(c.line, {
                    animate: t,
                    transition: l,
                    variants: {
                        normal: {
                            y1: 11,
                            y2: 17
                        },
                        animate: {
                            y1: 11.5,
                            y2: 17.5
                        }
                    },
                    x1: "14",
                    x2: "14",
                    y1: "11",
                    y2: "17"
                })]
            })
        })
    });
j.displayName = "DeleteIcon";
export {
    A,
    j as D,
    I as T
};