﻿!function(e){function t(t){for(var r,s,a=t[0],c=t[1],l=t[2],d=0,p=[];d<a.length;d++)s=a[d],o[s]&&p.push(o[s][0]),o[s]=0;for(r in c)Object.prototype.hasOwnProperty.call(c,r)&&(e[r]=c[r]);for(u&&u(t);p.length;)p.shift()();return n.push.apply(n,l||[]),i()}function i(){for(var e,t=0;t<n.length;t++){for(var i=n[t],r=!0,a=1;a<i.length;a++){var c=i[a];0!==o[c]&&(r=!1)}r&&(n.splice(t--,1),e=s(s.s=i[0]))}return e}var r={},o={"web/likes":0},n=[];function s(t){if(r[t])return r[t].exports;var i=r[t]={i:t,l:!1,exports:{}};return e[t].call(i.exports,i,i.exports,s),i.l=!0,i.exports}s.m=e,s.c=r,s.d=function(e,t,i){s.o(e,t)||Object.defineProperty(e,t,{enumerable:!0,get:i})},s.r=function(e){"undefined"!=typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(e,Symbol.toStringTag,{value:"Module"}),Object.defineProperty(e,"__esModule",{value:!0})},s.t=function(e,t){if(1&t&&(e=s(e)),8&t)return e;if(4&t&&"object"==typeof e&&e&&e.__esModule)return e;var i=Object.create(null);if(s.r(i),Object.defineProperty(i,"default",{enumerable:!0,value:e}),2&t&&"string"!=typeof e)for(var r in e)s.d(i,r,function(t){return e[t]}.bind(null,r));return i},s.n=function(e){var t=e&&e.__esModule?function(){return e.default}:function(){return e};return s.d(t,"a",t),t},s.o=function(e,t){return Object.prototype.hasOwnProperty.call(e,t)},s.p="/js/cmodules/";var a=window.webpackJsonp=window.webpackJsonp||[],c=a.push.bind(a);a.push=t,a=a.slice();for(var l=0;l<a.length;l++)t(a[l]);var u=c;n.push([168,"bundles/common"]),i()}({168:function(e,t,i){e.exports=i("RzFo")},RzFo:function(e,t,i){"use strict";i.r(t);i("91GP"),i("a1Th"),i("Btvt"),i("rE2o"),i("ioFf"),i("rGqo"),i("pIFo"),i("SRfc");function r(){return(r=Object.assign||function(e){for(var t=1;t<arguments.length;t++){var i=arguments[t];for(var r in i)Object.prototype.hasOwnProperty.call(i,r)&&(e[r]=i[r])}return e}).apply(this,arguments)}function o(e,t){return function(e){if(Array.isArray(e))return e}(e)||function(e,t){if(!(Symbol.iterator in Object(e)||"[object Arguments]"===Object.prototype.toString.call(e)))return;var i=[],r=!0,o=!1,n=void 0;try{for(var s,a=e[Symbol.iterator]();!(r=(s=a.next()).done)&&(i.push(s.value),!t||i.length!==t);r=!0);}catch(e){o=!0,n=e}finally{try{r||null==a.return||a.return()}finally{if(o)throw n}}return i}(e,t)||function(){throw new TypeError("Invalid attempt to destructure non-iterable instance")}()}var n=window,s=n.isNumeric,a=n.isUndefined,c=n.formatCount,l=n.isObject,u=n.isFunction,d="like",p="share",v="views",h="comment",_={toggle(e,t,i,r){if(cancelEvent(t),l(window.cur)&&u(cur.viewAsBox))return cur.viewAsBox();if(vk.widget&&!vk.id)return window.Widgets.oauth();var o=hasClass(e,"active");addClass(e,"animate"),this.clientUpdate(i,d,o?-1:1,!o),ajax.post("like.php",{act:o?"a_do_unlike":"a_do_like",object:i,hash:r,wall:2,from:this._getReference(i)},{onDone:t=>{this.update(i,t);var r=i.match(/^(wall|market)(.*)/);r&&cur.onLike&&cur.onLike(e,r[1],r[2],o)},onFail:()=>(toggleClass(e,"active",o),this.clientUpdate(i,d,o?1:-1,o),!1)}),intval(domData(e,"count"))>0?_.showLikes(e,i,{fast:!0}):e.tt&&e.tt.destroy&&e.tt.destroy()},_parseObjectId(e){var t=o(e.match(/^([a-z_]+)([0-9\-_]+)$/),3);return{objectType:t[1],objectId:t[2]}},_getReference:e=>cur.pvShown?"photo_viewer":e===cur.wallLayer?"wkview":window.mvcur&&mvcur.mvShown?"videoview":cur.wallType?"feed"===cur.wallType?"news"===cur.section?`feed_${cur.subsection?cur.subsection:cur.section}`:"recommended"===cur.section?`feed_recommended${"recent"!==cur.subsection?"_"+cur.subsection:""}`:inArray(cur.section,["friends","groups","videos","photos"])?`feed_${cur.subsection?"_"+cur.subsection:""}`:`feed_${cur.section}`:"top"===cur.wallType?"wall_top":`wall_${cur.onepost?"one":(cur.wallType||"").indexOf("full_")?"page":"full"}`:cur.module,share(e){var t=arguments.length>1&&void 0!==arguments[1]?arguments[1]:{};if(vk.widget&&!vk.id)return window.Widgets.oauth();if(l(window.cur)&&u(cur.viewAsBox))return cur.viewAsBox();var i=this._parseObjectId(e),o=i.objectType,n=i.objectId;showBox("like.php",r({act:"publish_box",object:e},t),{stat:["page.js","page.css","wide_dd.js","wide_dd.css","sharebox.js"]}),"wall"===o&&window.Wall&&Wall.triggerAdPostStat(n,"share_post"),cur.RpcMethods&&(cur.RpcMethods.likeFullUpdate=t=>_.update(e,window.cleanObj(t)))},clientUpdate(e,t,i,r){var o=this._getButtonsByType(e,t);if(o.length){var n=intval(domData(o[0],"count"))+i;this._updateDom(e,t,n,r),this.updateExternalIndex(e,{type:t,count:n,isActive:r})}},update(e,t){if(!isNaN(parseInt(t.like_num))){var i=a(t.like_my)?void 0:!!intval(t.like_my);this._updateDom(e,d,t.like_num,i,t.like_title),this.updateExternalIndex(e,{type:d,count:t.like_num,isActive:i})}if(!isNaN(parseInt(t.share_num))){var r=a(t.share_my)?void 0:!!intval(t.share_my);this._updateDom(e,p,t.share_num,r,t.share_title),this.updateExternalIndex(e,{type:p,count:t.share_num})}s(t.views_num)&&this._updateDom(e,v,t.views_num,void 0,t.views_title),s(t.comment_num)&&this._updateDom(e,h,t.comment_num)},updateComments(e,t){this.update(e,{comment_num:t})},_updateDom(e,t,i,r,o){var n=this._getButtonsByType(e,t),s=t===v,a="";s?a=i:i>0&&(a=vk.widget?c(i):langNumeric(i,"%s",!0)),s||(i=intval(i));for(var u=0;u<n.length;u++){var h=n[u];if(!hasClass(h,"no_counter")){var _=s?n[u]:geByClass1("like_button_count",n[u]);animateCount(_,a,{str:"auto",noWrapWidth:!s,noSpaceIfEmpty:!0}),toggleClass(h,"empty",i<=0),"boolean"==typeof r&&toggleClass(h,"active",r),attr(n[u],"data-count",i),s&&attr(n[u],"title",o||"");var m=n[u].tt;if(m){var w=domByClass(m.container,"_content"),f=domByClass(m.container,"_value"),y=domByClass(m.container,"_title"),g=intval(val(f));val(f,i),o&&val(y,o),l(m)&&(m.likeInvalidated=!0),(g!==i&&g<7||!1===o)&&(t===d?h.needReinitLikesTT=!0:t===p&&(h.needReinitShareTT=!0)),inArray(t,[d,p])&&toggleClass(w,"me_hidden",!r),!1===o&&m.destroy&&m.destroy()}}}},_getButtonsByType:(e,t)=>domQuery(`._like_${e} ._${t}`),showLikes(e,t){var i=arguments.length>2&&void 0!==arguments[2]?arguments[2]:{};if(!(e.postDontShowLikes||vk.widget&&vk.show_external_auth_box)){var r=i.views?{views:1}:i.share?{published:1}:{};i.listId&&(r.list=i.listId);var o,n,s=!!geByClass1("share",gpeByClass("like_wrap",e)),a=getComputedStyle(e),c=intval(a.getPropertyValue("padding-left").replace("px","")),l=intval(a.getPropertyValue("padding-top").replace("px","")),u=geByClass1("like_button_icon",e),d=[40-getSize(u)[0]/2-c,10-l],p=i.cl||"";if(i.share)p+="likes_tt_share";else if(p+="likes_tt_like","wpost"===i.from)d[0]=12;else if("widget_community"===i.from)d[0]=6;else if("wcomments"===i.from||"widget_comments"===cur.wallType){d[0]=getSize(e)[0]+16-getSize(u)[0]/2-10}i.share?(o="needReinitLikesTT",n="resetLikesTTTimer"):(o="needReinitShareTT",n="resetShareTTTimer"),clearTimeout(e[n]),showTooltip(e,{url:"/like.php",params:extend({act:"a_get_stats",object:t,has_share:s?1:""},r),appendEl:bodyNode,slide:15,shift:d,ajaxdt:i.fast?0:100,showdt:i.fast?0:400,hidedt:200,dir:"auto",checkLeft:!0,reverseOffset:80,noZIndex:!0,hasover:!0,tip:{over:()=>{_.showLikes(e,t,i)}},typeClass:"like_tt",className:p,onHide:()=>{clearTimeout(e[n]),e[o]&&(e[n]=setTimeout(()=>{delete e[o],e.tt&&e.tt.destroy&&e.tt.destroy()},200))}})}},showShare:function(e,t,i){_.showLikes(e,t,extend(i,{share:1}))},updateViews:function(e){vk.widget&&vk.show_external_auth_box||ajax.post("like.php",{act:"a_get_stats",object:e,views:1},{cache:1,onDone(t,i){var r=ce("div",{innerHTML:i});_._updateDom(e,v,t,void 0,r.innerText||r.textContent)}})},makeTemplate(e,t){return(t=extend({object_raw:"",likes_count:"",liked:!1,share_count:"",shared:"",views_count:"",share_opts:{},like_opts:{},class_name:"",like_cont_class:""},t)).like_active=t.liked?"active":"",t.share_active=t.shared?"active":"",t.comment_active="",t.likes_formatted_count=t.likes_count>0?langNumeric(t.likes_count,"%s",!0):"",t.share_formatted_count=t.share_count>0?langNumeric(t.share_count,"%s",!0):"",t.share_opts=this._convertOptsToString(t.share_opts),t.like_opts=this._convertOptsToString(t.like_opts),t.like_class_name=t.likes_count>0?"":"empty",t.share_class_name=t.share_count>0?"":"empty",rs(e,t)},_convertOptsToString:e=>JSON.stringify(e).replace(/\"/g,"'"),updateExternalIndex(e){var t=arguments.length>1&&void 0!==arguments[1]?arguments[1]:{},i=this._parseObjectId(e),r=i.objectType,o=i.objectId;switch(r){case"photo":if(!cur.pvShown||!cur.pvCurPhoto||cur.pvCurPhoto.id!==o)return;var n=cur.pvListId,s=cur.pvIndex,a=cur.pvData[n][s];t.type===d?(a.likes=t.count,a.liked=t.isActive,cur.pvCommsLikes[a.id][1]=t.count):t.type===p&&(a.shares=t.count);break;case"video":if(window.mvcur&&mvcur.mvShown&&mvcur.videoRaw===o&&t.type===d){var c=Videoview.getMvData();c.likes=t.count,void 0!==t.isActive&&(c.liked=t.isActive,Videoview.playerOnLiked(t.isActive),Videoview.recache())}}},showLikesList(e,t){cur.viewAsBox||hasClass(gpeByClass("like_btn",e),"no_counter")||showWiki({w:"likes/"+clean(t)},!1,!1,{queue:1})},showSharesList(e,t){cur.viewAsBox||hasClass(gpeByClass("like_btn",e),"no_counter")||showWiki({w:"shares/"+clean(t)},!1,!1,{queue:1})}};window.Likes=_;try{stManager.done(jsc("web/likes.js"))}catch(e){}}});