//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBLiveColumnModel>, NSString;

@interface TBLiveChannelModel : TBJSONModel
{
    _Bool _isDefault;
    NSString *_identify;
    long long _index;
    NSString *_title;
    NSArray<TBLiveColumnModel> *_liveColumnDatas;
}

@property(retain, nonatomic) NSArray<TBLiveColumnModel> *liveColumnDatas; // @synthesize liveColumnDatas=_liveColumnDatas;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *identify; // @synthesize identify=_identify;
- (void).cxx_destruct;

@end

