//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface ONEBussinessPoiModel : JSONModel
{
    float _lng;
    float _lat;
    NSString<Optional> *_name;
}

@property(nonatomic) float lat; // @synthesize lat=_lat;
@property(nonatomic) float lng; // @synthesize lng=_lng;
@property(retain, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

@end

