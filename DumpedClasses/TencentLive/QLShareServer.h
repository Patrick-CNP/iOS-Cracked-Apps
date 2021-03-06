//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLImageLoadDelegate.h"
#import "QLMBlogControllerDelegate.h"
#import "QLMBlogExtentionDelegate.h"
#import "QLMomentExtentionDelegate.h"

@class NSString, QLMBlogExtention, QLMomentExtention, QLShareItemReqModel, QLShareStrategy;

@interface QLShareServer : NSObject <QLMBlogControllerDelegate, QLMBlogExtentionDelegate, QLMomentExtentionDelegate, QLImageLoadDelegate>
{
    unsigned long long _platformMask;
    QLShareStrategy *_strategy;
    id <QLShareDelegate> _delegate;
    id <QLShareDataSource> _dataSource;
    QLMBlogExtention *_blogExtention;
    QLMomentExtention *_momentExtention;
    QLShareItemReqModel *_shareItemModel;
}

+ (id)sharedInstance;
+ (id)defaultServer:(id)arg1 dataSource:(id)arg2;
@property(retain, nonatomic) QLShareItemReqModel *shareItemModel; // @synthesize shareItemModel=_shareItemModel;
@property(retain, nonatomic) QLMomentExtention *momentExtention; // @synthesize momentExtention=_momentExtention;
@property(retain, nonatomic) QLMBlogExtention *blogExtention; // @synthesize blogExtention=_blogExtention;
@property(nonatomic) __weak id <QLShareDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <QLShareDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QLShareStrategy *strategy; // @synthesize strategy=_strategy;
@property(nonatomic) unsigned long long platformMask; // @synthesize platformMask=_platformMask;
- (void).cxx_destruct;
- (void)extentionPostBlogContent:(id)arg1;
- (void)extentionSendMomentDidCancel:(id)arg1;
- (void)extentionSendMomentDidFail:(id)arg1;
- (void)extentionSendMomentDidFinish:(id)arg1;
- (void)shareToMoment;
- (void)extentionPostBlogDidCancel:(id)arg1;
- (void)extentionPostBlogDidFail:(id)arg1;
- (void)extentionPostBlogDidFinish:(id)arg1;
- (void)controllerNeedSynShareToMoment:(id)arg1 content:(id)arg2;
- (void)controllerPostBlogFinish:(id)arg1 successed:(_Bool)arg2;
- (void)shareToMBlog;
- (void)didSharedSinaNotification:(id)arg1;
- (id)appendingContentTail:(id)arg1;
- (void)shareToSina;
- (void)didSharedWeixinNotification:(id)arg1;
- (void)shareToWx;
- (id)shareMsgToWx:(id)arg1;
- (void)didSharedQQNotification:(id)arg1;
- (void)shareToQQ;
- (void)shareToQZone;
- (void)synShareToMoment:(id)arg1;
- (void)showShareSuccessTip:(id)arg1;
- (void)completeShare:(unsigned long long)arg1;
- (id)getTopViewController;
- (int)shareWXType;
- (unsigned long long)blogType;
- (_Bool)dataSourceIsValid;
- (void)showParamsError;
- (void)didFailLoadWithError:(id)arg1 forURL:(id)arg2;
- (void)didLoadImage:(id)arg1 forURL:(id)arg2;
- (void)doShareNow;
- (void)checkImgAndShare;
- (_Bool)shouldUseNewMomentEditor:(unsigned long long)arg1;
- (id)shareItemForNewEditor:(unsigned long long *)arg1 shareItemDataKey:(id *)arg2;
- (id)titleAndSubTitle:(unsigned long long)arg1 dataSource:(id)arg2;
- (_Bool)shareTo:(unsigned long long)arg1 dataSource:(id)arg2;
- (_Bool)shareTo:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)cancel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

