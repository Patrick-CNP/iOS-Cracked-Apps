//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTChatMessageContent.h"

@class NSString;

@interface CTChatLocationMessage : CTChatMessageContent
{
    NSString *_title;
    double _lng;
    double _lat;
    NSString *_thumburl;
    NSString *_address;
    NSString *_poiname;
    NSString *_city;
    NSString *_country;
    NSString *_ext;
}

+ (id)messageWithlng:(double)arg1 lat:(double)arg2 thumburl:(id)arg3;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *poiname; // @synthesize poiname=_poiname;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *thumburl; // @synthesize thumburl=_thumburl;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)previewBody;
- (double)height;

@end
