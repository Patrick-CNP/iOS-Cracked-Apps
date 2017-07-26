//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIImageView, UITableView;

@interface TBAddressShareDefaultWordsView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _present;
    double _max_height;
    NSArray *_words;
    id <TBAddressShareDefaultWordsViewDelegate> _delegate;
    UIImageView *_backGroundImageView;
    UITableView *_wordsTableView;
    struct CGPoint _startingPoint;
}

@property(retain, nonatomic) UITableView *wordsTableView; // @synthesize wordsTableView=_wordsTableView;
@property(retain, nonatomic) UIImageView *backGroundImageView; // @synthesize backGroundImageView=_backGroundImageView;
@property(nonatomic, getter=isPresent) _Bool present; // @synthesize present=_present;
@property(nonatomic) __weak id <TBAddressShareDefaultWordsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint startingPoint; // @synthesize startingPoint=_startingPoint;
@property(retain, nonatomic) NSArray *words; // @synthesize words=_words;
@property(nonatomic) double max_height; // @synthesize max_height=_max_height;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)hide;
- (void)show;
- (id)initWithWords:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
