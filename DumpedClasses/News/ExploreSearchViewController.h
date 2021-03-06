//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "UIGestureRecognizerDelegate.h"

@class ExploreSearchView, NSNumber, NSString, SSThemedView, UIPanGestureRecognizer;

@interface ExploreSearchViewController : SSViewControllerBase <UIGestureRecognizerDelegate>
{
    _Bool _showNavigationBar;
    _Bool _showBackButton;
    int _fromType;
    unsigned long long _searchType;
    NSString *_from;
    NSString *_apiParam;
    NSString *_curTab;
    _Bool _animatedWhenDismiss;
    ExploreSearchView *_searchView;
    NSNumber *_groupID;
    NSString *_searchUrlString;
    NSString *_queryStr;
    UIPanGestureRecognizer *_panGestureRecognizer;
    SSThemedView *_maskView;
}

+ (id)searchBarWithWidth:(double)arg1;
@property(retain, nonatomic) SSThemedView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(copy, nonatomic) NSString *queryStr; // @synthesize queryStr=_queryStr;
@property(copy, nonatomic) NSString *searchUrlString; // @synthesize searchUrlString=_searchUrlString;
@property(retain, nonatomic) NSNumber *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) _Bool animatedWhenDismiss; // @synthesize animatedWhenDismiss=_animatedWhenDismiss;
@property(retain, nonatomic) ExploreSearchView *searchView; // @synthesize searchView=_searchView;
- (void).cxx_destruct;
- (void)setUpPanAction;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dismissFromViewWithCustomAnimation:(id)arg1;
- (void)showInViewWithCustomAnimation:(id)arg1 searchViewDelegate:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct CGRect)frameForSearchView;
- (id)init;
- (id)initWithNavigationBar:(_Bool)arg1;
- (id)initWithNavigationBar:(_Bool)arg1 showBackButton:(_Bool)arg2 queryStr:(id)arg3 fromType:(int)arg4 searchType:(unsigned long long)arg5;
- (id)initWithNavigationBar:(_Bool)arg1 showBackButton:(_Bool)arg2 queryStr:(id)arg3 fromType:(int)arg4;
- (id)initWithBaseCondition:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

