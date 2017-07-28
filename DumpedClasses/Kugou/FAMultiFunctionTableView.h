//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "FAMultiFunctionCellActionDelegate.h"
#import "FAOverLayViewDelegate.h"

@class FAMultiFunctionCell, FAOverLayView, NSString;

@interface FAMultiFunctionTableView : UITableView <FAOverLayViewDelegate, FAMultiFunctionCellActionDelegate>
{
    _Bool _isCellMenuOn;
    id <FAMultiFunctionTableViewDelegate> _multiTableDelegate;
    FAMultiFunctionCell *_activeCell;
    FAOverLayView *_overLayView;
    long long _cellIndex;
}

@property(nonatomic) long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(nonatomic) _Bool isCellMenuOn; // @synthesize isCellMenuOn=_isCellMenuOn;
@property(retain, nonatomic) FAOverLayView *overLayView; // @synthesize overLayView=_overLayView;
@property(retain, nonatomic) FAMultiFunctionCell *activeCell; // @synthesize activeCell=_activeCell;
@property(nonatomic) __weak id <FAMultiFunctionTableViewDelegate> multiTableDelegate; // @synthesize multiTableDelegate=_multiTableDelegate;
- (void).cxx_destruct;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)deleteCell:(id)arg1;
- (void)cellMenuIndex:(id)arg1 menuIndexNum:(long long)arg2 isLeftMenu:(_Bool)arg3;
- (void)tableMenuWillHideInCell:(id)arg1;
- (void)tableMenuDidHideInCell:(id)arg1;
- (void)tableMenuWillShowInCell:(id)arg1;
- (void)tableMenuDidShowInCell:(id)arg1;
- (void)hideMenuActive:(_Bool)arg1;
- (id)overLayView:(id)arg1 didHitPoint:(struct CGPoint)arg2 withEvent:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
