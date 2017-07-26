//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface QQMessageCacheItem : NSObject
{
    int _sessionType;
    NSString *_itemId;
    _Bool _delaySyncChange;
    _Bool _syncChangeOpen;
    int _xo;
    NSMutableArray *_msgCache;
    NSMutableSet *_newInsert;
    NSMutableSet *_changed;
    NSMutableSet *_cachedMsgSign;
    CDUnknownFunctionPointerType _sortMethod;
    int _msgCountLimit;
}

+ (id)loadMessage:(int)arg1 itemId:(id)arg2;
+ (void)syncChangeWithMessageSet:(id)arg1;
+ (void)insertMessages:(id)arg1;
+ (void)insertRecentMessage:(id)arg1;
- (long long)latestMsgTime;
- (void)reset;
- (void)removeOldMsgs;
- (void)setMsgCountLimit:(int)arg1;
- (void)sort;
- (void)setSortMethod:(CDUnknownFunctionPointerType)arg1;
- (void)updateSeq;
- (void)syncChange;
- (_Bool)updateWithPredicate:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)queryWithPredicate:(id)arg1;
- (_Bool)removeMessage:(id)arg1;
- (void)setMessageArray:(id)arg1;
- (id)getMessageArray;
- (void)addMessageArray:(id)arg1;
- (void)insertToCache:(id)arg1;
- (void)logModel:(id)arg1 withString:(id)arg2;
- (void)load;
@property(nonatomic) int sessionType; // @dynamic sessionType;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool delaySyncChange; // @dynamic delaySyncChange;
@property(retain, nonatomic) NSString *itemId; // @dynamic itemId;
@property(nonatomic) _Bool syncChangeOpen; // @dynamic syncChangeOpen;

@end
