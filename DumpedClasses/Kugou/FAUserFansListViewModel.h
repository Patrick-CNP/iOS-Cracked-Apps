//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FAUserFansListViewModel : NSObject
{
    NSMutableArray *userFansList;
    _Bool _hasMoreFancList;
    long long _userId;
    unsigned long long _userFansPage;
}

@property(nonatomic) unsigned long long userFansPage; // @synthesize userFansPage=_userFansPage;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool hasMoreFancList; // @synthesize hasMoreFancList=_hasMoreFancList;
@property(readonly, nonatomic) NSMutableArray *userFansList; // @synthesize userFansList;
- (void).cxx_destruct;
- (void)addUserFansListFromArray:(id)arg1;
- (void)loadMoreWithStartCallback:(CDUnknownBlockType)arg1 fancListCallback:(CDUnknownBlockType)arg2 endCallBack:(CDUnknownBlockType)arg3;
- (void)reloadFancList:(CDUnknownBlockType)arg1 fancListback:(CDUnknownBlockType)arg2 endCallBack:(CDUnknownBlockType)arg3;
- (id)init;

@end

