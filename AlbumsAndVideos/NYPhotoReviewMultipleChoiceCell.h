//
//  NYPhotoReviewMultipleChoiceCell.h
//  DDNM-NY
//
//  Created by 叶星龙 on 2017/1/6.
//  Copyright © 2017年 北京叮咚柠檬科技有限公司. All rights reserved.
//

#import "NYPhotoReviewThumbnailCell.h"

@interface NYPhotoReviewMultipleChoiceCell : NYPhotoReviewThumbnailCell

@property (nonatomic, copy) void (^didSelectPhotoBlock)();

@property (nonatomic ,assign) BOOL photoSelect;

@end
