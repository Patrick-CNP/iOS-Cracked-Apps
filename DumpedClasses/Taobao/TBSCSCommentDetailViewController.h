//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TBSCSListViewDelegate.h"

@class NSDictionary, NSString, TBSCSDetailViewProducer, TBSCSListViewAndPublishViewProducer, UITableView, UIView;

@interface TBSCSCommentDetailViewController : UIViewController <TBSCSListViewDelegate>
{
    _Bool _isDetailRequestSuccess;
    _Bool _isListFirstIn;
    NSString *_namespace;
    NSString *_source;
    NSString *_targetId;
    NSString *_commentId;
    NSDictionary *_extra;
    NSString *_imgMax;
    NSString *_imgMin;
    UIView *_detailContentView;
    UIView *_detailView;
    UITableView *_commentListView;
    TBSCSDetailViewProducer *_detailViewProducer;
    TBSCSListViewAndPublishViewProducer *_listViewAndPublishViewProducer;
    NSString *_isShowKeyboard;
}

@property(copy, nonatomic) NSString *isShowKeyboard; // @synthesize isShowKeyboard=_isShowKeyboard;
@property(nonatomic) _Bool isListFirstIn; // @synthesize isListFirstIn=_isListFirstIn;
@property(nonatomic) _Bool isDetailRequestSuccess; // @synthesize isDetailRequestSuccess=_isDetailRequestSuccess;
@property(retain, nonatomic) TBSCSListViewAndPublishViewProducer *listViewAndPublishViewProducer; // @synthesize listViewAndPublishViewProducer=_listViewAndPublishViewProducer;
@property(retain, nonatomic) TBSCSDetailViewProducer *detailViewProducer; // @synthesize detailViewProducer=_detailViewProducer;
@property(retain, nonatomic) UITableView *commentListView; // @synthesize commentListView=_commentListView;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIView *detailContentView; // @synthesize detailContentView=_detailContentView;
@property(copy, nonatomic) NSString *imgMin; // @synthesize imgMin=_imgMin;
@property(copy, nonatomic) NSString *imgMax; // @synthesize imgMax=_imgMax;
@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *namespace; // @synthesize namespace=_namespace;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)listViewWillRequestData:(id)arg1 requestType:(int)arg2;
- (void)viewDidRequestData:(id)arg1 success:(_Bool)arg2;
- (void)viewDidRender:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

