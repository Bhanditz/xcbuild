/* Copyright 2013-present Facebook. All Rights Reserved. */

#ifndef __xcassets_Asset_ImageStack_h
#define __xcassets_Asset_ImageStack_h

#include <xcassets/Asset/Asset.h>
#include <plist/Dictionary.h>

#include <memory>
#include <string>
#include <vector>
#include <ext/optional>

namespace xcassets {
namespace Asset {

class ImageStackLayer;

class ImageStack : public Asset {
private:
    std::vector<std::shared_ptr<ImageStackLayer>> _children;

private:
    // TODO layers
    // TODO canvasSize
    // TODO on-demand-resource-tags

public:
    std::vector<std::shared_ptr<ImageStackLayer>> children() const
    { return _children; }

public:
    // TODO layers
    // TODO canvasSize
    // TODO on-demand-resource-tags

public:
    static AssetType Type()
    { return AssetType::ImageStack; }
    virtual AssetType type()
    { return AssetType::ImageStack; }

public:
    static ext::optional<std::string> Extension()
    { return std::string("imagestack"); }

protected:
    virtual bool parse(plist::Dictionary const *dict, std::unordered_set<std::string> *seen, bool check);
};

}
}

#endif // !__xcassets_Asset_ImageStack_h