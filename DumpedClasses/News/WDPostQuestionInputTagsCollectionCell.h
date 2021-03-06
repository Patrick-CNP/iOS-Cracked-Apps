//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class SSThemedImageView, SSThemedLabel, WDQuestionTagEntity;

@interface WDPostQuestionInputTagsCollectionCell : UICollectionViewCell
{
    WDQuestionTagEntity *_tagModel;
    id <WDPostQuestionInputTagsCollectionCellDelegate> _delegate;
    SSThemedLabel *_concernLabel;
    SSThemedImageView *_closeImage;
}

+ (struct CGSize)sizeForCollectionCellWithName:(id)arg1;
@property(retain, nonatomic) SSThemedImageView *closeImage; // @synthesize closeImage=_closeImage;
@property(retain, nonatomic) SSThemedLabel *concernLabel; // @synthesize concernLabel=_concernLabel;
@property(nonatomic) __weak id <WDPostQuestionInputTagsCollectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WDQuestionTagEntity *tagModel; // @synthesize tagModel=_tagModel;
- (void).cxx_destruct;
- (struct CGRect)frameForCloseButton;
- (struct CGRect)frameForConcernLabel;
- (void)closeButtonTaped:(id)arg1;
- (void)refreshCellWithTagModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

