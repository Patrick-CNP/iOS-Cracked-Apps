//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class DCOrderInfoModelDelInfoApiModel<Optional>, NSArray<Optional><DCOrderInfoModel>, NSNumber<Optional>;

@interface DCGetOrderListApiModel : TRBaseModel
{
    NSArray<Optional><DCOrderInfoModel> *_orders;
    NSNumber<Optional> *_next;
    DCOrderInfoModelDelInfoApiModel<Optional> *_delinfo;
}

@property(retain, nonatomic) DCOrderInfoModelDelInfoApiModel<Optional> *delinfo; // @synthesize delinfo=_delinfo;
@property(retain, nonatomic) NSNumber<Optional> *next; // @synthesize next=_next;
@property(retain, nonatomic) NSArray<Optional><DCOrderInfoModel> *orders; // @synthesize orders=_orders;
- (void).cxx_destruct;

@end
