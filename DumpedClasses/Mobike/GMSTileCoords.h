//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary;

@interface GMSTileCoords : NSObject <NSCopying>
{
    int _zoom;
    int _x;
    int _y;
    int _scaleShift;
    int _southwestX;
    int _southwestY;
    unsigned long long _hash;
    NSDictionary *_requestParams;
}

+ (id)tileCoordsWithCoords:(const struct TileCoords *)arg1;
+ (id)outOfBoundsCoordsOverlappingWrappedRectangle2D:(const struct WrappedRectangle2D *)arg1 zoom:(int)arg2;
+ (id)coordsOverlappingWrappedRectangle2D:(const struct WrappedRectangle2D *)arg1 zoom:(int)arg2 requestParams:(id)arg3;
+ (id)coordsOverlappingWrappedRectangle2D:(const struct WrappedRectangle2D *)arg1 zoom:(int)arg2;
+ (id)unboundedCoordsClosestToZoom:(int)arg1 point:(const struct Point2D *)arg2;
+ (id)coordsClosestToZoom:(int)arg1 point:(const struct Point2D *)arg2 requestParams:(id)arg3;
+ (id)coordsClosestToZoom:(int)arg1 point:(const struct Point2D *)arg2;
+ (id)coordsContainingZoom:(int)arg1 point:(const struct Point2D *)arg2;
@property(readonly, copy, nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
@property(readonly, nonatomic) int y; // @synthesize y=_y;
@property(readonly, nonatomic) int x; // @synthesize x=_x;
@property(readonly, nonatomic) int zoom; // @synthesize zoom=_zoom;
- (id)coordsWithRequestParams:(id)arg1;
- (id)coordsForParentZoom:(int)arg1;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) unsigned long long hashWithoutParams;
- (_Bool)isEqualWithoutParams:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)stringValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (struct TileCoords)cppCoords;
- (id)initWithTileCoords:(const struct TileCoords *)arg1;
- (id)initWithZoom:(int)arg1 x:(int)arg2 y:(int)arg3 requestParams:(id)arg4;
- (id)initWithZoom:(int)arg1 x:(int)arg2 y:(int)arg3;
- (id)init;
- (struct IndoorID)indoorID;
@property(readonly, nonatomic) struct Point2D northeastCorner;
@property(readonly, nonatomic) struct Point2D southwestCorner;
- (struct Point2D)center2D;
- (struct Rectangle2D)bound2D;
- (struct Point2D)convertWorldPoint2DToLocal:(const struct Point2D *)arg1;
- (struct Point3D)convertWorldPointToLocal:(const struct Point3D *)arg1;
- (void)convertLocalToWorldPoint2D:(struct Point2D *)arg1 point2D:(struct Point2D *)arg2 point2D:(struct Point2D *)arg3;
- (struct Point2D)convertLocalPoint2DToWorld:(const struct Point2D *)arg1;
- (struct Point3D)convertLocalPointToWorld:(const struct Point3D *)arg1;

@end

