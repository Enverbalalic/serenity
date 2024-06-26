/*
 * Copyright (c) 2024, MacDue <macdue@dueutil.tech>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/Layout/SVGGraphicsBox.h>
#include <LibWeb/SVG/SVGElement.h>
#include <LibWeb/SVG/SVGMaskElement.h>

namespace Web::Layout {

class SVGMaskBox : public SVGGraphicsBox {
    JS_CELL(SVGMaskBox, SVGBox);
    JS_DECLARE_ALLOCATOR(SVGMaskBox);

public:
    SVGMaskBox(DOM::Document&, SVG::SVGMaskElement&, NonnullRefPtr<CSS::StyleProperties>);
    virtual ~SVGMaskBox() override = default;

    SVG::SVGMaskElement& dom_node() { return verify_cast<SVG::SVGMaskElement>(SVGGraphicsBox::dom_node()); }
    SVG::SVGMaskElement const& dom_node() const { return verify_cast<SVG::SVGMaskElement>(SVGGraphicsBox::dom_node()); }

    virtual JS::GCPtr<Painting::Paintable> create_paintable() const override;
};

}
