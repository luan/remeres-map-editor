// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_KMAP_KMAP_H_
#define FLATBUFFERS_GENERATED_KMAP_KMAP_H_

#include "flatbuffers/flatbuffers.h"

namespace Kmap {

struct Map;
struct MapBuilder;

struct MapHeader;
struct MapHeaderBuilder;

struct MapData;
struct MapDataBuilder;

struct Area;
struct AreaBuilder;

struct ItemAttributes;
struct ItemAttributesBuilder;

struct Tile;
struct TileBuilder;

struct Item;
struct ItemBuilder;

struct HouseInfo;
struct HouseInfoBuilder;

struct ActionAttributes;
struct ActionAttributesBuilder;

struct Town;
struct TownBuilder;

struct Waypoint;
struct WaypointBuilder;

struct Position;
struct PositionBuilder;

struct Map FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MapBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_HEADER = 4,
    VT_DATA = 6
  };
  const Kmap::MapHeader *header() const {
    return GetPointer<const Kmap::MapHeader *>(VT_HEADER);
  }
  const Kmap::MapData *data() const {
    return GetPointer<const Kmap::MapData *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_HEADER) &&
           verifier.VerifyTable(header()) &&
           VerifyOffset(verifier, VT_DATA) &&
           verifier.VerifyTable(data()) &&
           verifier.EndTable();
  }
};

struct MapBuilder {
  typedef Map Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_header(flatbuffers::Offset<Kmap::MapHeader> header) {
    fbb_.AddOffset(Map::VT_HEADER, header);
  }
  void add_data(flatbuffers::Offset<Kmap::MapData> data) {
    fbb_.AddOffset(Map::VT_DATA, data);
  }
  explicit MapBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Map> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Map>(end);
    return o;
  }
};

inline flatbuffers::Offset<Map> CreateMap(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<Kmap::MapHeader> header = 0,
    flatbuffers::Offset<Kmap::MapData> data = 0) {
  MapBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_header(header);
  return builder_.Finish();
}

struct MapHeader FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MapHeaderBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_WIDTH = 4,
    VT_HEIGHT = 6,
    VT_VERSION = 8,
    VT_MONSTER_SPAWN_FILE = 10,
    VT_NPC_SPAWN_FILE = 12,
    VT_HOUSE_FILE = 14,
    VT_DESCRIPTION = 16
  };
  uint16_t width() const {
    return GetField<uint16_t>(VT_WIDTH, 0);
  }
  uint16_t height() const {
    return GetField<uint16_t>(VT_HEIGHT, 0);
  }
  uint16_t version() const {
    return GetField<uint16_t>(VT_VERSION, 0);
  }
  const flatbuffers::String *monster_spawn_file() const {
    return GetPointer<const flatbuffers::String *>(VT_MONSTER_SPAWN_FILE);
  }
  const flatbuffers::String *npc_spawn_file() const {
    return GetPointer<const flatbuffers::String *>(VT_NPC_SPAWN_FILE);
  }
  const flatbuffers::String *house_file() const {
    return GetPointer<const flatbuffers::String *>(VT_HOUSE_FILE);
  }
  const flatbuffers::String *description() const {
    return GetPointer<const flatbuffers::String *>(VT_DESCRIPTION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint16_t>(verifier, VT_WIDTH, 2) &&
           VerifyField<uint16_t>(verifier, VT_HEIGHT, 2) &&
           VerifyField<uint16_t>(verifier, VT_VERSION, 2) &&
           VerifyOffset(verifier, VT_MONSTER_SPAWN_FILE) &&
           verifier.VerifyString(monster_spawn_file()) &&
           VerifyOffset(verifier, VT_NPC_SPAWN_FILE) &&
           verifier.VerifyString(npc_spawn_file()) &&
           VerifyOffset(verifier, VT_HOUSE_FILE) &&
           verifier.VerifyString(house_file()) &&
           VerifyOffset(verifier, VT_DESCRIPTION) &&
           verifier.VerifyString(description()) &&
           verifier.EndTable();
  }
};

struct MapHeaderBuilder {
  typedef MapHeader Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_width(uint16_t width) {
    fbb_.AddElement<uint16_t>(MapHeader::VT_WIDTH, width, 0);
  }
  void add_height(uint16_t height) {
    fbb_.AddElement<uint16_t>(MapHeader::VT_HEIGHT, height, 0);
  }
  void add_version(uint16_t version) {
    fbb_.AddElement<uint16_t>(MapHeader::VT_VERSION, version, 0);
  }
  void add_monster_spawn_file(flatbuffers::Offset<flatbuffers::String> monster_spawn_file) {
    fbb_.AddOffset(MapHeader::VT_MONSTER_SPAWN_FILE, monster_spawn_file);
  }
  void add_npc_spawn_file(flatbuffers::Offset<flatbuffers::String> npc_spawn_file) {
    fbb_.AddOffset(MapHeader::VT_NPC_SPAWN_FILE, npc_spawn_file);
  }
  void add_house_file(flatbuffers::Offset<flatbuffers::String> house_file) {
    fbb_.AddOffset(MapHeader::VT_HOUSE_FILE, house_file);
  }
  void add_description(flatbuffers::Offset<flatbuffers::String> description) {
    fbb_.AddOffset(MapHeader::VT_DESCRIPTION, description);
  }
  explicit MapHeaderBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<MapHeader> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<MapHeader>(end);
    return o;
  }
};

inline flatbuffers::Offset<MapHeader> CreateMapHeader(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint16_t width = 0,
    uint16_t height = 0,
    uint16_t version = 0,
    flatbuffers::Offset<flatbuffers::String> monster_spawn_file = 0,
    flatbuffers::Offset<flatbuffers::String> npc_spawn_file = 0,
    flatbuffers::Offset<flatbuffers::String> house_file = 0,
    flatbuffers::Offset<flatbuffers::String> description = 0) {
  MapHeaderBuilder builder_(_fbb);
  builder_.add_description(description);
  builder_.add_house_file(house_file);
  builder_.add_npc_spawn_file(npc_spawn_file);
  builder_.add_monster_spawn_file(monster_spawn_file);
  builder_.add_version(version);
  builder_.add_height(height);
  builder_.add_width(width);
  return builder_.Finish();
}

inline flatbuffers::Offset<MapHeader> CreateMapHeaderDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint16_t width = 0,
    uint16_t height = 0,
    uint16_t version = 0,
    const char *monster_spawn_file = nullptr,
    const char *npc_spawn_file = nullptr,
    const char *house_file = nullptr,
    const char *description = nullptr) {
  auto monster_spawn_file__ = monster_spawn_file ? _fbb.CreateString(monster_spawn_file) : 0;
  auto npc_spawn_file__ = npc_spawn_file ? _fbb.CreateString(npc_spawn_file) : 0;
  auto house_file__ = house_file ? _fbb.CreateString(house_file) : 0;
  auto description__ = description ? _fbb.CreateString(description) : 0;
  return Kmap::CreateMapHeader(
      _fbb,
      width,
      height,
      version,
      monster_spawn_file__,
      npc_spawn_file__,
      house_file__,
      description__);
}

struct MapData FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MapDataBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_AREAS = 4,
    VT_TOWNS = 6,
    VT_WAYPOINTS = 8
  };
  const flatbuffers::Vector<flatbuffers::Offset<Kmap::Area>> *areas() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Kmap::Area>> *>(VT_AREAS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Kmap::Town>> *towns() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Kmap::Town>> *>(VT_TOWNS);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Kmap::Waypoint>> *waypoints() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Kmap::Waypoint>> *>(VT_WAYPOINTS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_AREAS) &&
           verifier.VerifyVector(areas()) &&
           verifier.VerifyVectorOfTables(areas()) &&
           VerifyOffset(verifier, VT_TOWNS) &&
           verifier.VerifyVector(towns()) &&
           verifier.VerifyVectorOfTables(towns()) &&
           VerifyOffset(verifier, VT_WAYPOINTS) &&
           verifier.VerifyVector(waypoints()) &&
           verifier.VerifyVectorOfTables(waypoints()) &&
           verifier.EndTable();
  }
};

struct MapDataBuilder {
  typedef MapData Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_areas(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Kmap::Area>>> areas) {
    fbb_.AddOffset(MapData::VT_AREAS, areas);
  }
  void add_towns(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Kmap::Town>>> towns) {
    fbb_.AddOffset(MapData::VT_TOWNS, towns);
  }
  void add_waypoints(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Kmap::Waypoint>>> waypoints) {
    fbb_.AddOffset(MapData::VT_WAYPOINTS, waypoints);
  }
  explicit MapDataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<MapData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<MapData>(end);
    return o;
  }
};

inline flatbuffers::Offset<MapData> CreateMapData(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Kmap::Area>>> areas = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Kmap::Town>>> towns = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Kmap::Waypoint>>> waypoints = 0) {
  MapDataBuilder builder_(_fbb);
  builder_.add_waypoints(waypoints);
  builder_.add_towns(towns);
  builder_.add_areas(areas);
  return builder_.Finish();
}

inline flatbuffers::Offset<MapData> CreateMapDataDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<Kmap::Area>> *areas = nullptr,
    const std::vector<flatbuffers::Offset<Kmap::Town>> *towns = nullptr,
    const std::vector<flatbuffers::Offset<Kmap::Waypoint>> *waypoints = nullptr) {
  auto areas__ = areas ? _fbb.CreateVector<flatbuffers::Offset<Kmap::Area>>(*areas) : 0;
  auto towns__ = towns ? _fbb.CreateVector<flatbuffers::Offset<Kmap::Town>>(*towns) : 0;
  auto waypoints__ = waypoints ? _fbb.CreateVector<flatbuffers::Offset<Kmap::Waypoint>>(*waypoints) : 0;
  return Kmap::CreateMapData(
      _fbb,
      areas__,
      towns__,
      waypoints__);
}

struct Area FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef AreaBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TILES = 4,
    VT_POSITION = 6
  };
  const flatbuffers::Vector<flatbuffers::Offset<Kmap::Tile>> *tiles() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Kmap::Tile>> *>(VT_TILES);
  }
  const Kmap::Position *position() const {
    return GetPointer<const Kmap::Position *>(VT_POSITION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_TILES) &&
           verifier.VerifyVector(tiles()) &&
           verifier.VerifyVectorOfTables(tiles()) &&
           VerifyOffset(verifier, VT_POSITION) &&
           verifier.VerifyTable(position()) &&
           verifier.EndTable();
  }
};

struct AreaBuilder {
  typedef Area Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_tiles(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Kmap::Tile>>> tiles) {
    fbb_.AddOffset(Area::VT_TILES, tiles);
  }
  void add_position(flatbuffers::Offset<Kmap::Position> position) {
    fbb_.AddOffset(Area::VT_POSITION, position);
  }
  explicit AreaBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Area> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Area>(end);
    return o;
  }
};

inline flatbuffers::Offset<Area> CreateArea(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Kmap::Tile>>> tiles = 0,
    flatbuffers::Offset<Kmap::Position> position = 0) {
  AreaBuilder builder_(_fbb);
  builder_.add_position(position);
  builder_.add_tiles(tiles);
  return builder_.Finish();
}

inline flatbuffers::Offset<Area> CreateAreaDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<Kmap::Tile>> *tiles = nullptr,
    flatbuffers::Offset<Kmap::Position> position = 0) {
  auto tiles__ = tiles ? _fbb.CreateVector<flatbuffers::Offset<Kmap::Tile>>(*tiles) : 0;
  return Kmap::CreateArea(
      _fbb,
      tiles__,
      position);
}

struct ItemAttributes FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ItemAttributesBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_COUNT = 4,
    VT_DEPOT_ID = 6,
    VT_RUNE_CHARGES = 8,
    VT_TEXT = 10,
    VT_DESCRIPTION = 12,
    VT_ACTION_ATTRIBUTES = 14
  };
  uint8_t count() const {
    return GetField<uint8_t>(VT_COUNT, 0);
  }
  uint16_t depot_id() const {
    return GetField<uint16_t>(VT_DEPOT_ID, 0);
  }
  uint16_t rune_charges() const {
    return GetField<uint16_t>(VT_RUNE_CHARGES, 0);
  }
  const flatbuffers::String *text() const {
    return GetPointer<const flatbuffers::String *>(VT_TEXT);
  }
  const flatbuffers::String *description() const {
    return GetPointer<const flatbuffers::String *>(VT_DESCRIPTION);
  }
  const Kmap::ActionAttributes *action_attributes() const {
    return GetPointer<const Kmap::ActionAttributes *>(VT_ACTION_ATTRIBUTES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_COUNT, 1) &&
           VerifyField<uint16_t>(verifier, VT_DEPOT_ID, 2) &&
           VerifyField<uint16_t>(verifier, VT_RUNE_CHARGES, 2) &&
           VerifyOffset(verifier, VT_TEXT) &&
           verifier.VerifyString(text()) &&
           VerifyOffset(verifier, VT_DESCRIPTION) &&
           verifier.VerifyString(description()) &&
           VerifyOffset(verifier, VT_ACTION_ATTRIBUTES) &&
           verifier.VerifyTable(action_attributes()) &&
           verifier.EndTable();
  }
};

struct ItemAttributesBuilder {
  typedef ItemAttributes Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_count(uint8_t count) {
    fbb_.AddElement<uint8_t>(ItemAttributes::VT_COUNT, count, 0);
  }
  void add_depot_id(uint16_t depot_id) {
    fbb_.AddElement<uint16_t>(ItemAttributes::VT_DEPOT_ID, depot_id, 0);
  }
  void add_rune_charges(uint16_t rune_charges) {
    fbb_.AddElement<uint16_t>(ItemAttributes::VT_RUNE_CHARGES, rune_charges, 0);
  }
  void add_text(flatbuffers::Offset<flatbuffers::String> text) {
    fbb_.AddOffset(ItemAttributes::VT_TEXT, text);
  }
  void add_description(flatbuffers::Offset<flatbuffers::String> description) {
    fbb_.AddOffset(ItemAttributes::VT_DESCRIPTION, description);
  }
  void add_action_attributes(flatbuffers::Offset<Kmap::ActionAttributes> action_attributes) {
    fbb_.AddOffset(ItemAttributes::VT_ACTION_ATTRIBUTES, action_attributes);
  }
  explicit ItemAttributesBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<ItemAttributes> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ItemAttributes>(end);
    return o;
  }
};

inline flatbuffers::Offset<ItemAttributes> CreateItemAttributes(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint8_t count = 0,
    uint16_t depot_id = 0,
    uint16_t rune_charges = 0,
    flatbuffers::Offset<flatbuffers::String> text = 0,
    flatbuffers::Offset<flatbuffers::String> description = 0,
    flatbuffers::Offset<Kmap::ActionAttributes> action_attributes = 0) {
  ItemAttributesBuilder builder_(_fbb);
  builder_.add_action_attributes(action_attributes);
  builder_.add_description(description);
  builder_.add_text(text);
  builder_.add_rune_charges(rune_charges);
  builder_.add_depot_id(depot_id);
  builder_.add_count(count);
  return builder_.Finish();
}

inline flatbuffers::Offset<ItemAttributes> CreateItemAttributesDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint8_t count = 0,
    uint16_t depot_id = 0,
    uint16_t rune_charges = 0,
    const char *text = nullptr,
    const char *description = nullptr,
    flatbuffers::Offset<Kmap::ActionAttributes> action_attributes = 0) {
  auto text__ = text ? _fbb.CreateString(text) : 0;
  auto description__ = description ? _fbb.CreateString(description) : 0;
  return Kmap::CreateItemAttributes(
      _fbb,
      count,
      depot_id,
      rune_charges,
      text__,
      description__,
      action_attributes);
}

struct Tile FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TileBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_GROUND = 4,
    VT_X = 6,
    VT_Y = 8,
    VT_FLAGS = 10,
    VT_TILE_ID = 12,
    VT_HOUSE_INFO = 14
  };
  const Kmap::Item *ground() const {
    return GetPointer<const Kmap::Item *>(VT_GROUND);
  }
  uint8_t x() const {
    return GetField<uint8_t>(VT_X, 0);
  }
  uint8_t y() const {
    return GetField<uint8_t>(VT_Y, 0);
  }
  uint32_t flags() const {
    return GetField<uint32_t>(VT_FLAGS, 0);
  }
  uint16_t tile_id() const {
    return GetField<uint16_t>(VT_TILE_ID, 0);
  }
  const Kmap::HouseInfo *house_info() const {
    return GetPointer<const Kmap::HouseInfo *>(VT_HOUSE_INFO);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_GROUND) &&
           verifier.VerifyTable(ground()) &&
           VerifyField<uint8_t>(verifier, VT_X, 1) &&
           VerifyField<uint8_t>(verifier, VT_Y, 1) &&
           VerifyField<uint32_t>(verifier, VT_FLAGS, 4) &&
           VerifyField<uint16_t>(verifier, VT_TILE_ID, 2) &&
           VerifyOffset(verifier, VT_HOUSE_INFO) &&
           verifier.VerifyTable(house_info()) &&
           verifier.EndTable();
  }
};

struct TileBuilder {
  typedef Tile Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ground(flatbuffers::Offset<Kmap::Item> ground) {
    fbb_.AddOffset(Tile::VT_GROUND, ground);
  }
  void add_x(uint8_t x) {
    fbb_.AddElement<uint8_t>(Tile::VT_X, x, 0);
  }
  void add_y(uint8_t y) {
    fbb_.AddElement<uint8_t>(Tile::VT_Y, y, 0);
  }
  void add_flags(uint32_t flags) {
    fbb_.AddElement<uint32_t>(Tile::VT_FLAGS, flags, 0);
  }
  void add_tile_id(uint16_t tile_id) {
    fbb_.AddElement<uint16_t>(Tile::VT_TILE_ID, tile_id, 0);
  }
  void add_house_info(flatbuffers::Offset<Kmap::HouseInfo> house_info) {
    fbb_.AddOffset(Tile::VT_HOUSE_INFO, house_info);
  }
  explicit TileBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Tile> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Tile>(end);
    return o;
  }
};

inline flatbuffers::Offset<Tile> CreateTile(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<Kmap::Item> ground = 0,
    uint8_t x = 0,
    uint8_t y = 0,
    uint32_t flags = 0,
    uint16_t tile_id = 0,
    flatbuffers::Offset<Kmap::HouseInfo> house_info = 0) {
  TileBuilder builder_(_fbb);
  builder_.add_house_info(house_info);
  builder_.add_flags(flags);
  builder_.add_ground(ground);
  builder_.add_tile_id(tile_id);
  builder_.add_y(y);
  builder_.add_x(x);
  return builder_.Finish();
}

struct Item FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ItemBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ITEMS = 4,
    VT_ID = 6,
    VT_ATTRIBUTES = 8
  };
  const flatbuffers::Vector<flatbuffers::Offset<Kmap::Item>> *items() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Kmap::Item>> *>(VT_ITEMS);
  }
  uint16_t id() const {
    return GetField<uint16_t>(VT_ID, 0);
  }
  const Kmap::ItemAttributes *attributes() const {
    return GetPointer<const Kmap::ItemAttributes *>(VT_ATTRIBUTES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ITEMS) &&
           verifier.VerifyVector(items()) &&
           verifier.VerifyVectorOfTables(items()) &&
           VerifyField<uint16_t>(verifier, VT_ID, 2) &&
           VerifyOffset(verifier, VT_ATTRIBUTES) &&
           verifier.VerifyTable(attributes()) &&
           verifier.EndTable();
  }
};

struct ItemBuilder {
  typedef Item Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_items(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Kmap::Item>>> items) {
    fbb_.AddOffset(Item::VT_ITEMS, items);
  }
  void add_id(uint16_t id) {
    fbb_.AddElement<uint16_t>(Item::VT_ID, id, 0);
  }
  void add_attributes(flatbuffers::Offset<Kmap::ItemAttributes> attributes) {
    fbb_.AddOffset(Item::VT_ATTRIBUTES, attributes);
  }
  explicit ItemBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Item> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Item>(end);
    return o;
  }
};

inline flatbuffers::Offset<Item> CreateItem(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Kmap::Item>>> items = 0,
    uint16_t id = 0,
    flatbuffers::Offset<Kmap::ItemAttributes> attributes = 0) {
  ItemBuilder builder_(_fbb);
  builder_.add_attributes(attributes);
  builder_.add_items(items);
  builder_.add_id(id);
  return builder_.Finish();
}

inline flatbuffers::Offset<Item> CreateItemDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<Kmap::Item>> *items = nullptr,
    uint16_t id = 0,
    flatbuffers::Offset<Kmap::ItemAttributes> attributes = 0) {
  auto items__ = items ? _fbb.CreateVector<flatbuffers::Offset<Kmap::Item>>(*items) : 0;
  return Kmap::CreateItem(
      _fbb,
      items__,
      id,
      attributes);
}

struct HouseInfo FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef HouseInfoBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_DOOR_ID = 6
  };
  uint32_t id() const {
    return GetField<uint32_t>(VT_ID, 0);
  }
  uint8_t door_id() const {
    return GetField<uint8_t>(VT_DOOR_ID, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_ID, 4) &&
           VerifyField<uint8_t>(verifier, VT_DOOR_ID, 1) &&
           verifier.EndTable();
  }
};

struct HouseInfoBuilder {
  typedef HouseInfo Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint32_t id) {
    fbb_.AddElement<uint32_t>(HouseInfo::VT_ID, id, 0);
  }
  void add_door_id(uint8_t door_id) {
    fbb_.AddElement<uint8_t>(HouseInfo::VT_DOOR_ID, door_id, 0);
  }
  explicit HouseInfoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<HouseInfo> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<HouseInfo>(end);
    return o;
  }
};

inline flatbuffers::Offset<HouseInfo> CreateHouseInfo(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t id = 0,
    uint8_t door_id = 0) {
  HouseInfoBuilder builder_(_fbb);
  builder_.add_id(id);
  builder_.add_door_id(door_id);
  return builder_.Finish();
}

struct ActionAttributes FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ActionAttributesBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ACTION_ID = 4,
    VT_UNIQUE_ID = 6,
    VT_TELEPORT_POSITION = 8
  };
  uint16_t action_id() const {
    return GetField<uint16_t>(VT_ACTION_ID, 0);
  }
  uint16_t unique_id() const {
    return GetField<uint16_t>(VT_UNIQUE_ID, 0);
  }
  const Kmap::Position *teleport_position() const {
    return GetPointer<const Kmap::Position *>(VT_TELEPORT_POSITION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint16_t>(verifier, VT_ACTION_ID, 2) &&
           VerifyField<uint16_t>(verifier, VT_UNIQUE_ID, 2) &&
           VerifyOffset(verifier, VT_TELEPORT_POSITION) &&
           verifier.VerifyTable(teleport_position()) &&
           verifier.EndTable();
  }
};

struct ActionAttributesBuilder {
  typedef ActionAttributes Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_action_id(uint16_t action_id) {
    fbb_.AddElement<uint16_t>(ActionAttributes::VT_ACTION_ID, action_id, 0);
  }
  void add_unique_id(uint16_t unique_id) {
    fbb_.AddElement<uint16_t>(ActionAttributes::VT_UNIQUE_ID, unique_id, 0);
  }
  void add_teleport_position(flatbuffers::Offset<Kmap::Position> teleport_position) {
    fbb_.AddOffset(ActionAttributes::VT_TELEPORT_POSITION, teleport_position);
  }
  explicit ActionAttributesBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<ActionAttributes> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ActionAttributes>(end);
    return o;
  }
};

inline flatbuffers::Offset<ActionAttributes> CreateActionAttributes(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint16_t action_id = 0,
    uint16_t unique_id = 0,
    flatbuffers::Offset<Kmap::Position> teleport_position = 0) {
  ActionAttributesBuilder builder_(_fbb);
  builder_.add_teleport_position(teleport_position);
  builder_.add_unique_id(unique_id);
  builder_.add_action_id(action_id);
  return builder_.Finish();
}

struct Town FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef TownBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ID = 4,
    VT_NAME = 6,
    VT_POSITION = 8
  };
  uint8_t id() const {
    return GetField<uint8_t>(VT_ID, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const Kmap::Position *position() const {
    return GetPointer<const Kmap::Position *>(VT_POSITION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_ID, 1) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_POSITION) &&
           verifier.VerifyTable(position()) &&
           verifier.EndTable();
  }
};

struct TownBuilder {
  typedef Town Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint8_t id) {
    fbb_.AddElement<uint8_t>(Town::VT_ID, id, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Town::VT_NAME, name);
  }
  void add_position(flatbuffers::Offset<Kmap::Position> position) {
    fbb_.AddOffset(Town::VT_POSITION, position);
  }
  explicit TownBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Town> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Town>(end);
    return o;
  }
};

inline flatbuffers::Offset<Town> CreateTown(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint8_t id = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<Kmap::Position> position = 0) {
  TownBuilder builder_(_fbb);
  builder_.add_position(position);
  builder_.add_name(name);
  builder_.add_id(id);
  return builder_.Finish();
}

inline flatbuffers::Offset<Town> CreateTownDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint8_t id = 0,
    const char *name = nullptr,
    flatbuffers::Offset<Kmap::Position> position = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return Kmap::CreateTown(
      _fbb,
      id,
      name__,
      position);
}

struct Waypoint FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef WaypointBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_POSITION = 6
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const Kmap::Position *position() const {
    return GetPointer<const Kmap::Position *>(VT_POSITION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_POSITION) &&
           verifier.VerifyTable(position()) &&
           verifier.EndTable();
  }
};

struct WaypointBuilder {
  typedef Waypoint Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Waypoint::VT_NAME, name);
  }
  void add_position(flatbuffers::Offset<Kmap::Position> position) {
    fbb_.AddOffset(Waypoint::VT_POSITION, position);
  }
  explicit WaypointBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Waypoint> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Waypoint>(end);
    return o;
  }
};

inline flatbuffers::Offset<Waypoint> CreateWaypoint(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<Kmap::Position> position = 0) {
  WaypointBuilder builder_(_fbb);
  builder_.add_position(position);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<Waypoint> CreateWaypointDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    flatbuffers::Offset<Kmap::Position> position = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return Kmap::CreateWaypoint(
      _fbb,
      name__,
      position);
}

struct Position FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PositionBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_X = 4,
    VT_Y = 6,
    VT_Z = 8
  };
  uint16_t x() const {
    return GetField<uint16_t>(VT_X, 0);
  }
  uint16_t y() const {
    return GetField<uint16_t>(VT_Y, 0);
  }
  uint8_t z() const {
    return GetField<uint8_t>(VT_Z, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint16_t>(verifier, VT_X, 2) &&
           VerifyField<uint16_t>(verifier, VT_Y, 2) &&
           VerifyField<uint8_t>(verifier, VT_Z, 1) &&
           verifier.EndTable();
  }
};

struct PositionBuilder {
  typedef Position Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_x(uint16_t x) {
    fbb_.AddElement<uint16_t>(Position::VT_X, x, 0);
  }
  void add_y(uint16_t y) {
    fbb_.AddElement<uint16_t>(Position::VT_Y, y, 0);
  }
  void add_z(uint8_t z) {
    fbb_.AddElement<uint8_t>(Position::VT_Z, z, 0);
  }
  explicit PositionBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Position> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Position>(end);
    return o;
  }
};

inline flatbuffers::Offset<Position> CreatePosition(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint16_t x = 0,
    uint16_t y = 0,
    uint8_t z = 0) {
  PositionBuilder builder_(_fbb);
  builder_.add_y(y);
  builder_.add_x(x);
  builder_.add_z(z);
  return builder_.Finish();
}

inline const Kmap::Map *GetMap(const void *buf) {
  return flatbuffers::GetRoot<Kmap::Map>(buf);
}

inline const Kmap::Map *GetSizePrefixedMap(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Kmap::Map>(buf);
}

inline bool VerifyMapBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Kmap::Map>(nullptr);
}

inline bool VerifySizePrefixedMapBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Kmap::Map>(nullptr);
}

inline void FinishMapBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Kmap::Map> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedMapBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Kmap::Map> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Kmap

#endif  // FLATBUFFERS_GENERATED_KMAP_KMAP_H_
