//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelRoomCalendarRequest : CTBusinessBean
{
    int _hotelId;
    int _roomId;
    int _pageIndex;
    NSString *_checkInDate;
}

@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(nonatomic) int roomId; // @synthesize roomId=_roomId;
@property(nonatomic) int hotelId; // @synthesize hotelId=_hotelId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

