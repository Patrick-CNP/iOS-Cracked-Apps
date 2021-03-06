//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString<Ignore>, NSString<Optional>;

@interface DBDRouteModel : TRBaseModel
{
    NSString<Optional> *_route_id;
    NSString<Optional> *_name;
    NSString<Optional> *_departure_time;
    NSString<Optional> *_from_lng;
    NSString<Optional> *_from_lat;
    NSString<Optional> *_to_lng;
    NSString<Optional> *_to_lat;
    NSString<Optional> *_from_name;
    NSString<Optional> *_to_name;
    NSString<Optional> *_from_address;
    NSString<Optional> *_to_address;
    NSString<Optional> *_from_city_id;
    NSString<Optional> *_to_city_id;
    NSString<Optional> *_weekend_route_push;
    NSString<Optional> *_workday_route_push;
    NSString<Optional> *_weekend_order_push;
    NSString<Optional> *_workday_order_push;
    NSString<Optional> *_back_time;
    NSString<Optional> *_route_channel;
    NSString<Optional> *_to_city_name;
    NSString<Optional> *_from_city_name;
    NSString<Optional> *_starting_poi_id;
    NSString<Optional> *_dest_poi_id;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *dest_poi_id; // @synthesize dest_poi_id=_dest_poi_id;
@property(copy, nonatomic) NSString<Optional> *starting_poi_id; // @synthesize starting_poi_id=_starting_poi_id;
@property(copy, nonatomic) NSString<Optional> *from_city_name; // @synthesize from_city_name=_from_city_name;
@property(copy, nonatomic) NSString<Optional> *to_city_name; // @synthesize to_city_name=_to_city_name;
@property(copy, nonatomic) NSString<Optional> *route_channel; // @synthesize route_channel=_route_channel;
@property(copy, nonatomic) NSString<Optional> *back_time; // @synthesize back_time=_back_time;
@property(copy, nonatomic) NSString<Optional> *workday_order_push; // @synthesize workday_order_push=_workday_order_push;
@property(copy, nonatomic) NSString<Optional> *weekend_order_push; // @synthesize weekend_order_push=_weekend_order_push;
@property(copy, nonatomic) NSString<Optional> *workday_route_push; // @synthesize workday_route_push=_workday_route_push;
@property(copy, nonatomic) NSString<Optional> *weekend_route_push; // @synthesize weekend_route_push=_weekend_route_push;
@property(copy, nonatomic) NSString<Optional> *to_city_id; // @synthesize to_city_id=_to_city_id;
@property(copy, nonatomic) NSString<Optional> *from_city_id; // @synthesize from_city_id=_from_city_id;
@property(copy, nonatomic) NSString<Optional> *to_address; // @synthesize to_address=_to_address;
@property(copy, nonatomic) NSString<Optional> *from_address; // @synthesize from_address=_from_address;
@property(copy, nonatomic) NSString<Optional> *to_name; // @synthesize to_name=_to_name;
@property(copy, nonatomic) NSString<Optional> *from_name; // @synthesize from_name=_from_name;
@property(copy, nonatomic) NSString<Optional> *to_lat; // @synthesize to_lat=_to_lat;
@property(copy, nonatomic) NSString<Optional> *to_lng; // @synthesize to_lng=_to_lng;
@property(copy, nonatomic) NSString<Optional> *from_lat; // @synthesize from_lat=_from_lat;
@property(copy, nonatomic) NSString<Optional> *from_lng; // @synthesize from_lng=_from_lng;
@property(copy, nonatomic) NSString<Optional> *departure_time; // @synthesize departure_time=_departure_time;
@property(copy, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString<Optional> *route_id; // @synthesize route_id=_route_id;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString<Ignore> *to_name_and_city;
@property(readonly, nonatomic) NSString<Ignore> *from_name_and_city;

@end

