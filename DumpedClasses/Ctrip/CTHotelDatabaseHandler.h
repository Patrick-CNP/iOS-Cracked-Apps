//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDatabaseHandler.h"

@interface CTHotelDatabaseHandler : CTDatabaseHandler
{
}

+ (_Bool)deleteAllCityQueryList;
+ (_Bool)cleanAllUserInfo;
- (void)initBrowseQueryHistoryDatabase;
- (void)initDestinationHistoryDatabase;
- (void)initCommentSubmitHistoryDatabase;
- (void)initCommendKeywordDatabase;
- (void)initKeywordQueryDatabaseWith:(int)arg1;
- (void)initKeywordQueryDatabase;
- (_Bool)initHotelDB;
- (_Bool)isDbFileExist:(id)arg1;
- (_Bool)isNeedDBCopy;
- (_Bool)cleanDatabaseCache;
- (_Bool)upgradeDatabase;

@end

