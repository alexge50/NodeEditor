#ifndef NODE_EDITOR_RENDER_H
#define NODE_EDITOR_RENDER_H

#include "NodeEditor.h"
#include "detail/GeometryBuffer.h"
#include "shader_solid.h"
#include "shader_background.h"

class Render
{
public:
    Render();
    ~Render();

    void operator()(const NodeEditor& node_editor);

private:
    GeometryBuffer quad, quad_outline;

    Shaders::solid solid_shader;
    Shaders::background background_shader;
};

#endif //NODE_EDITOR_RENDER_H
