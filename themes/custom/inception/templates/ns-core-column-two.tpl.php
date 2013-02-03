<?php

/**
 * @file
 * This layout is intended to be used inside the page content pane. Thats why
 * there is not wrapper div by default.
 */
?>

<?php if (!empty($content['header_alpha'])): ?>
  <header class="page-header">
    <?php print render($content['header_alpha']); ?>
  </header>
<?php endif; ?>

<div class="row">
<?php if (!empty($content['main'])): ?>
  <section class="span8">
    <?php print render($content['main']); ?>
  </section>
<?php endif; ?>

<?php if (!empty($content['aside_beta'])): ?>
  <aside class="span4">
    <?php print render($content['aside_beta']); ?>
  </aside>
<?php endif; ?>
</div>

<?php if (!empty($content['footer_alpha'])): ?>
  <div class="page-footer">
    <?php print render($content['footer_alpha']); ?>
  </div>
<?php endif; ?>
